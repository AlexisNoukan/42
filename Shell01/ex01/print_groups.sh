FT_USER=$(printenv USER)
groups $FT_USER | tr ' ' , | tr -d "\n"

