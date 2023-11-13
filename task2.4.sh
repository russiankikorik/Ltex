content=$(cat file14.txt);
sed "s/$content/privetiki/" file14.txt | tee file14.txt
