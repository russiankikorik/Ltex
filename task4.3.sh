for pid in $(ps --ppid "$1" -o pid | grep "[0-9]");
do
    kill $pid
done
kill $1
