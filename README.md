# Assignment-Problem-POSist-Technologies-1-2

Project having a dynamic list of ordered records which is owned by an owner. 
Also, a record has data in the form of a floating point integral value where via the scheme of symmetric encryption, data is encrypted by the owner and can be decrypted only by the owner. Here the integrity of data is checked by computing the hash value of the data and checking with the already computed hash. Further, ownership of a particular node value is transferred.The previous owner validates his/her ownership by decrypting the data, and computing the hash values.The new owner then encrypts the data with his key.
At last, providing way to find the longest chain of genesis node or any other node.Then data is added of the two nodes i.e. merging the 2 nodes and ownership of the longer chain node are retained after a merge operation.

I have used cpp language and structure as data structure for storing various input datas.
Child node refrences are taken as pointers and stored in a vector of structure pointers.
Editing is done by taking refrences and values.
For finding the longest chain either dfs or level order can be used.
