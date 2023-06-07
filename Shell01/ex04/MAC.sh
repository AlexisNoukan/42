ifconfig | grep -Eo '([0-9a-fA-F]{2}:){5}[0-9a-fA-F]{2}' | awk '{print $0"\n"}'

