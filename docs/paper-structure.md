## this file
This could possibly be very silly to read, as it handles very easy and intuitive components of documents. 
This is more of a reference for myself for/while coding, in order to determine what syntactical components/requirements i need to integrate into .pap's. 

## what are documents?
<!-- This question man xD -->
I am not going to pull up the definition. Instead let's consider some examples:
- legal papers
- scientific papers/thesis'
- (lecture) slides
- news articles (and prints of web-pages)
- books and manuals

## what can we find inside documents?
Pages. At least one (this is sadly one of the bigger issues).
But this answer is a bit too simple, so let's take a look at the contents of the pages themselves. 
What could an author force us readers to read/see?
- paragraphs
- headings / chapter titles
- list of chapters (table of contents)
- page numbers (these won't be much fun)
- (footnotes, maybe)
- typeset texts/strings (including mathematical equations)
- tables
- plots/diagrams/graphs
- images
- lists of tables, plots, ..., images
- citations/references/hyperlinks (and a list of the full reference list)

## possible positioning problems / where to place things in document
These will likely be the result of positioning certain elements in specific ways and binding those elements to fixed sizes.
Again, i'd like to start as simple as possible.
Imagine simply a page with text. This text has a font and color. 
Let's disregard the fact you were imagening an a4 paper for now and start more abstractly.
We are bound by <t style="font-family: courier; color: red">height</t> and <t style="font-family: courier; color: green">width</t> of the document. 
I refuse to deal with non-rectangular documents. Humanity is not ready for these yet, sorry.

Within these we need some space to the sides, typically referred to as <t style="font-family: courier; color: blue">margins</t>. These can be set for <t style="font-family: courier">top</t>, <t style="font-family: courier">bottom</t>, <t style="font-family: courier">left</t> and <t style="font-family: courier">right</t>.

A paragraph will result in a block of text inside these margins. But, as previously mentioned, paragraphs are not the only building blocks of documents. 
Contrary to TeX, which attempts to place any other elements (like images, tables, ...) relative to the placement of the command inside the source-code, i propose a set of in-document positions (simply: top-left, top, top-right, center-left, center, center-right, bottom-left, bottom, bottom-right). These should/could include adjustable sizes for these boxes, but the standard will be vertical/horizontal thirds (resulting in 9 pieces to the puzzle). Text will automatically fill unspecified locations on the paper, unless explicitely positioned elsewhere.

So basically: We're constructing a table! (At least i am, mentally right now).
But: Any unfilled cells should be automatically connected (if they're texts) or be connectable (if their other imagery).
This requires: Some commands!

## possible coloring errors / needed commands for formating

## needed information that only the user can provide