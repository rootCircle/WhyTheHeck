<!-- TOC for Java Programs -->

# Ready to Embark on a Java Adventure?
### Get ready to venture into the thrilling world of Java! Below, you'll find a list of Java programs that will challenge your coding skills and elevate your understanding of this versatile language.

<style>
    .auto-width {
        width: auto;
        max-width: 300px;
        white-space: wrap;
        overflow: hidden; 
        text-overflow: ellipsis; 
    }
</style>

<br/>
<br/>

| File | <div class="auto-width">Description</div> | <div class="auto-width">Did You Expect?</div> | <div class="auto-width">Actual Output</div> | <div class="auto-width">Explanation</div> |
| --- | --- | --- | --- | --- |
| equalString.java | <div class="auto-width">Comparing Strings in Java</div> | <div class="auto-width">Hello Verbose! I am JAVA</div> | <div class="auto-width">Love JAVA! Hate world</div> | <div class="auto-width">String is an object in Java.<br>The '==' operator compares memory references for objects, including strings. To compare the content of strings, use the '.equals()' method, whereas for other data types, '==' compares their values.</div> |
| forGame.java | <div class="auto-width">Misplaced semicolons terminate if and for statements prematurely</div> | <div class="auto-width">Got print only once! So sad<br>Got print only once! So sad<br>Got print only once! So sad<br>Got print only once! So sad<br>Got print only once! So sad<br>Got print only once! So sad<br>Got print only once! So sad<br>Got print only once! So sad<br>Got print only once! So sad<br>Got print only once! So sad</div> | <div class="auto-width">10 is not equal to 10<br>Got print only once! So sad</div> | <div class="auto-width">The semicolons (;) immediately following the if statement and the for loop act as terminators for those statements, causing them to execute without any associated block. Consequently, the code inside the curly braces is treated as a separate, unrelated block of code, which is why it executes unconditionally.</div> |
| nextline.java | <div class="auto-width">Program Missing String Input due to alreadypresent newline character in buffer unintentionally</div> | <div class="auto-width">Enter a number :<br>69<br>Enter a String :<br>FOSS<br>But Why JAVA is on so hurry that it didn't took my string input ?<br>Enter The Second String :<br>FOSSAgain</div> | <div class="auto-width">Enter a number :<br>69<br>Enter a String :<br>But Why JAVA is on so hurry that it didn't took my string input ?<br>Enter The Second String :<br>FOSS</div> | <div class="auto-width">When you use sc.nextInt() to read an integer input, it consumes the integer value but leaves the newline character (Enter key press) in the input buffer. When you then call sc.nextLine(), it reads the remaining newline character from the previous input, which appears as if it's not allowing you to enter a new string.Obviously this problem will not affect other data type inputs except string and char.</div>
