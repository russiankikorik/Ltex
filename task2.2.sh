for fname in ls *.txt;
do
    echo $fname >> "$fname"
done
