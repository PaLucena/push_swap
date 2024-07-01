
<h1 align="center">push_swap</h1>

<h2>Description</h2>
<p><strong>push_swap</strong> is a project from the 42 cursus that involves creating a program to sort a stack of integers using a limited set of operations. The main objective is to understand and implement various sorting algorithms and to optimize them for performance and efficiency within the constraints of the project.</p>
<div align="center"><img height="250" src="https://github.com/PaLucena/push_swap/blob/main/img/push_swap.png"></div>

<h2>Table of Contents</h2>
<ul>
	<li><a href="#requirements">Requirements</a></li>
	<li><a href="#installation">Installation</a></li>
	<li><a href="#usage">Usage</a></li>
	<li><a href="#operations">Operations</a></li>
	<li><a href="#project-structure">Project Structure</a></li>
	<li><a href="#license">License</a></li>
</ul>

<h2 id="requirements">Requirements</h2>
<p>To compile and run the project, you will need:</p>
<ul>
	<li>A Unix operating system (Linux or macOS).</li>
	<li>gcc or any C compiler.</li>
	<li>Make.</li>
</ul>

<h2 id="installation">Installation</h2>
<p>Clone the project repository and navigate to the main directory:</p>
<pre><code>git clone https://github.com/PaLucena/push_swap.git
cd push_swap</code></pre>
<p>Compile the project using the included Makefile:</p>
<pre><code>make</code></pre>
<p>This will generate the <code>push_swap</code> executable in the current directory.</p>

<h2 id="usage">Usage</h2>
<p>To sort a stack of integers, run the following command:</p>
<pre><code>./push_swap &lt;list_of_integers&gt;</code></pre>
<p>Where <code>&lt;list_of_integers&gt;</code> is a list of space-separated integers.</p>
<p>Example:</p>
<pre><code>./push_swap 3 2 5 1 4</code></pre>

<h2 id="operations">Operations</h2>
<p>The <strong>push_swap</strong> program supports the following operations to sort the stack:</p>
<ul>
	<li><code>sa</code>: Swap the first two elements at the top of stack A.</li>
	<li><code>sb</code>: Swap the first two elements at the top of stack B.</li>
	<li><code>ss</code>: Swap the first two elements at the top of both stacks A and B.</li>
	<li><code>pa</code>: Push the top element of stack B onto stack A.</li>
	<li><code>pb</code>: Push the top element of stack A onto stack B.</li>
	<li><code>ra</code>: Rotate stack A upwards (first element becomes the last one).</li>
	<li><code>rb</code>: Rotate stack B upwards (first element becomes the last one).</li>
	<li><code>rr</code>: Rotate both stacks A and B upwards.</li>
	<li><code>rra</code>: Reverse rotate stack A (last element becomes the first one).</li>
	<li><code>rrb</code>: Reverse rotate stack B (last element becomes the first one).</li>
	<li><code>rrr</code>: Reverse rotate both stacks A and B.</li>
</ul>

<h2 id="project-structure">Project Structure</h2>
<p>The project is organized into the following files and directories:</p>
<ul>
	<li><code>src/</code>: Contains the source code of the sorting algorithms and operations.</li>
	<li><code>include/</code>: Contains the header files.</li>
	<li><code>Makefile</code>: Build script to generate the executable.</li>
	<li><code>README.md</code>: Project documentation.</li>
</ul>

<h2 id="license">License</h2>
<p>This project is licensed under the MIT License. See the <code>LICENSE</code> file for more details.</p>
