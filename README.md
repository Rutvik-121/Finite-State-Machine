# Finite-State-Machine

Given a string S, the task is to design a Deterministic Finite Automata (DFA) for accepting the language L = {aNbM | N ≥ 0, M ≥ 0, N+M ≥ 1}. , i.e., a regular language L such that all ‘a’ occur before the first occurrence of ‘b’ {a, ab, aab, bb…, }. If the given string follows the given language L, then print “Accepted”. Otherwise, print “Not Accepted”.

Approach: The problem can be accepted only when the following cases are met:

All the characters can be ‘a’.
All the characters can be ‘b’.
All the ‘b’ come occur after all the ‘a’.
There is at least one character in the string.
This can be better visualized with the help of the state transition diagram of the DFA

State Transition Diagram:
![image](https://user-images.githubusercontent.com/101583512/210357720-d63e0228-b065-4f49-b585-21288ad49c73.png)

Examples

Input: S = “aabbb”
Output: Accepted
Explanation: All the ‘a’ come before ‘b’ s.

Input: S = “ba”
Output: Not Accepted
Explanation: ‘b’ comes before ‘a’.

Input: S = “aaa”
Output: Accepted
Explanation: Note that ‘b’ does not need to occur in S

Input: S = “b”
Output: Accepted
Explanation: Note that ‘a’ does not need to occur in S
