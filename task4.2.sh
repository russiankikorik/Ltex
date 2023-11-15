i=0
for pid in $(ps --ppid $1 -o pid | grep "[0-9]");
do
    kill $pid
    i=$((i+1))
    if [[ "$i" == '3' ]]
    then
        break
    fi
done
