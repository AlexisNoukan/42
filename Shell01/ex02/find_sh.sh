find . -type f -name "*.sh" -exec basename {} \; | awk -F/ '{print $NF}'

