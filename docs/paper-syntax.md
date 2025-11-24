## List of commands for the creation of certain paper-elements (dubbed from now on: imagery).
### General Remarks
Though documents are usually largely composed of text-strings, the document itself is split up into (logical) images, thus you'll often find the term "image" for a structural element inside of a document. (Why: PDFs are complex Image-Files/Specifications essentially).

In general the syntax is going to follow a #command structure, i.e. you put a hash-tag and type the name of the command after.
You'll be able to rename commands with #rename(command)(new_name). If any components produced of the command itself need renaming (i.e. for language specific purposes) you'll be able to do so via #rename(command/object)(new_name), but i'll generally avoid creating these kinds of scenarios, by adding specific commands for these.

### Structural Access (in page images)
As mentioned in the explanation of the [structure](paper-structure.md) and (or, not sure right now) [readme](../README.md) of this repository, i want to keep this as simple and minimal as possible.
If you need access to the top-right corner specifically use:
\#top-right ...
... can either be a text (which on overflow will find the next possible empty cell below, which it can write into).
Starting a paragraph in the right third of the page should only produce text in this third. Unless specified !!! where to place next paragraph? needs more interpretation/thought !!!


### Structural Images (across document)

### Image manipulation
// Includes: typesetting images, creating plots of functions/data, simple diagrams, as well as lower-level formatting.

### Text manipulation
// The simple highlighting features we all know and love.