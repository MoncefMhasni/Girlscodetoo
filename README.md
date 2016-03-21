# Problems : 

## A. Nearest Taller Girl

Difficulty: Easy 

Category: Adhoc

Author: Saad Taame 

### Solution: 

Starting from index i, look for the first girl j whose height is more than h(i) and print her index.
Reiterate starting from j.

Be carefull, indexing starts from 1 !

## B. Flower Graphs

Difficulty: Moderate 

Category: Graphs,Combinatorics

Author: Saad Taame 

### Solution :

Let deg(i) be the degree of vertex i. If deg(i)>= d then i can be the center of C(deg(i),d) flower graphs, where C(n,k) is the Binomial coefficient.

The answer to the problem is Sum C(deg(i),d)%mod.

## C. Shortest Route

Difficulty: Super easy  

Category: Adhoc

Author: Saad Taame 

### Solution :

The best strategy is to make min(N,M) diagonal moves toward (min(N,M),min(N,M)) and then to continue either right if N<M or down if not.  
So the answer to the problem is min(N,M)+ (max(N,M)-min(N,M)) = max(N,M) 


## D. Robot

Difficulty: Moderate

Category: Geometry

Author: Moncef Mhasni

### Solution :
OP = OO1 + O1O2 + ... + OnP = (0,l0)+(l1*sin(t0),l1*cos(t0))+(l2*sin(t0+t1),l2*cos(t0+t1))+...

Xp = Sum li*sin(Sum tj)

Yp = l0 + Sum li*cos(sum tj)


## E. Music Identification

Difficulty: Easy

Category: Strings

Author: Moncef Mhasni

### Solution :

Go over all the songs in the database. If P is a substring of a song in the database, print its name. 
The songs may contain spaces, read by line! 

## F. mdN Encryption

Difficulty: Hard

Category: DP, Combinatorics 

Author: Moncef Mhasni

### Solution :

To break down the encryption method, the cracking tool can guess C, C+1, C+i,...N-2 or N correct matchings (Why not N-1? take a pencil a try to make N-1 matchings).

To guess C+i correct matchings, there is C(N,i) ways to choose a character (regardless of its encoding) and D(N-i) ways to encode it.
Where C is the binomial coefficient and D(i) the derangement of i.

The number of ways to guess exactly C+i correct matchings is C(N,i)*D(N-i). 

First pre-calculate C(N,k) and D(k) for N < 10000 in O(N log(N)), then answer each test case in O(N-C). 

## G. Leila and Coins

Difficulty: Super easy

Category: Adhoc

Author: Khalil Ait Brahim

## H. Mountain Heights

Difficulty: Moderate

Category: Geometry

Author: Ahmed Tailouloute

### Solution :

Let h(i) be the height of the mountain i, and g the gap between the mountains i and i+1.

if h(i)>h(i+1) then to see the mountain i+2, h(i+2) must be superior to h(i+1)-g = h(i+1)-(h(i)-h(i+1)) = 2*h(i+1)-h(i)

otherwise, h(i+2) must be superior to h(i+1)+g =  h(i+1)+(h(i+1)-h(i)) = 2*h(i+1)-h(i)

In both cases, h(i+2) > 2*h(i+1)-h(i)

## I. Missing Episode

Difficulty: Easy

Category: Adhoc

Author: Ahmed Tailouloute

### Solution :

While reading the episodes' numbers, mark each one in an array of bools(for example, v[i]=1 if she watched the episode number i) . Then search for the unmarked episode and print its index. 
