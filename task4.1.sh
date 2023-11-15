for i in {1..10};
do
    sleep 600 &
    echo $! >> pids.txt
done
sleep 3600
