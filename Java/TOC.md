<!-- Table Of Content for Java Folder -->

## Ready to Embark on a Java Adventure?
### Get ready to venture into the thrilling world of Java! Below, you'll find a list of Java programs that will challenge your coding skills and elevate your understanding of this versatile language.
<br/>

<table>
   <tbody>
      <tr>
         <td>
            <h2>File</h2>
         </td>
         <td>
            <h2>Description</h2>
         </td>
         <td>
            <h2>Did You Expect?</h2>
         </td>
         <td>
            <h2>Actual Output</h2>
         </td>
         <td>
            <h2>Explanation</h2>
         </td>
         <td>
            <h2>Same code in other language</h2>
         </td>
      </tr>
      <tr>
         <td>
            <h2><a href="https://github.com/rootCircle/WhyTheHeck/blob/main/Java/equalString.java">equalString.java</a></h2>
         </td>
         <td>Comparing Strings in Java</td>
         <td>Hello Verbose! I am JAVA</td>
         <td>Love JAVA! Hate world</td>
         <td>
            <p><strong>String is an object in Java.</strong></p>
            <p>The '==' operator compares memory references for objects, including strings. To compare the content of strings, use the '.equals()' method, whereas for other data types, '==' compares their values.</p>
         </td>
         <td>&nbsp;</td>
      </tr>
      <tr>
         <td>
            <h2><a href="https://github.com/rootCircle/WhyTheHeck/blob/main/Java/forGame.java">forGame.java</a></h2>
         </td>
         <td>Misplaced semicolons terminate if and for statements prematurely</td>
         <td>Got print only once! So sad<br>Got print only once! So sad<br>Got print only once! So sad<br>Got print only once! So sad<br>Got print only once! So sad<br>Got print only once! So sad<br>Got print only once! So sad<br>Got print only once! So sad<br>Got print only once! So sad<br>Got print only once! So sad</td>
         <td>10 is not equal to 10<br>Got print only once! So sad</td>
         <td>The semicolons (;) immediately following the if statement and the for loop act as terminators for those statements, causing them to execute without any associated block. Consequently, the code inside the curly braces is treated as a separate, unrelated block of code, which is why it executes unconditionally.</td>
         <td>&nbsp;</td>
      </tr>
      <tr>
         <td>
            <h2><a href="https://github.com/rootCircle/WhyTheHeck/blob/main/Java/nextline.java">nextline.java</a></h2>
         </td>
         <td>Program Missing String Input due to alreadypresent newline character in buffer unintentionally</td>
         <td>
            <p>Enter a number :<br>69<br>Enter a String :<br>FOSS<br>But Why JAVA is on so hurry that it didn't took my string input ?</p>
            <p>Enter The Second String :<br>FOSSAgain</p>
         </td>
         <td>
            <p>Enter a number :<br>69<br>Enter a String :<br>But Why JAVA is on so hurry that it didn't took my string input ?</p>
            <p>Enter The Second String :<br>FOSS</p>
         </td>
         <td>When you use sc.nextInt() to read an integer input, it consumes the integer value but leaves the newline character (Enter key press) in the input buffer. When you then call sc.nextLine(), it reads the remaining newline character from the previous input, which appears as if it's not allowing you to enter a new string.Obviously this problem will not affect other data type inputs except string and char</td>
         <td>&nbsp;</td>
      </tr>
      <tr>
         <td>
            <h2><a href="https://github.com/rootCircle/WhyTheHeck/blob/main/Java/BubbleSort.java">BubbleSort.java</a></h2>
         </td>
         <td>Program to sort array in ascending order using bubblesort</td>
         <td>
            [1, 3, 4, 7, 9]
         </td>
         <td>
            [9, 7, 4, 3, 1]
         </td>
         <td>In the internal for loop of bubble sort, we are compare if the jth element is less than (j+1)th element and then it performs swap, whereas the swap should be performed when jth element is greater than (j+1)th element.</td>
         <td>&nbsp;</td>
      </tr>
   </tbody>
</table>
