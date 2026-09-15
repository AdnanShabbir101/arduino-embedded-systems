import os
import re

# Get all items in the current working directory
current_directory = os.getcwd()

print("🔄 Starting folder normalization for perfect sorting...\n")

for folder_name in os.listdir(current_directory):
    # Only look at directories
    if os.path.isdir(os.path.join(current_directory, folder_name)):
        
        # Match pattern variations like project_1, Project_4, project_01
        match = re.match(r'^([Pp]roject)_(\d+)(.*)$', folder_name)
        
        if match:
            prefix = match.group(1).lower()  # Force lowercase 'project' for consistency
            num_str = match.group(2)         # The number string
            suffix = match.group(3)          # Everything after the number
            
            # Pad single digits to two digits
            padded_num = num_str.zfill(2)
            
            # Construct the clean, uniform new name
            new_name = f"{prefix}_{padded_num}{suffix}"
            
            # Rename if the name actually needs to change
            if folder_name != new_name:
                old_path = os.path.join(current_directory, folder_name)
                new_path = os.path.join(current_directory, new_name)
                os.rename(old_path, new_path)
                print(f"✅ Renamed: '{folder_name}' ➡️ '{new_name}'")

print("\n🎉 Done! All folders are now perfectly normalized and sequential.")
