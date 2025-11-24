## yes i know LaTeX exists // about this repository
The intent of this program is to provide a very simplistic approach toward the creation of documents, especially scientific papers (= i don't like word and compiling TeX annoys me). 
While technologies for this exact purpose exist (see: afore mentioned LaTeX), i want to (a) simplify the process and (b) use some modern technologies for some advanced features.

This project/repository should not be taken too seriously. It is mainly an attempt for me (hi, i'm hendrik) to work on something productive and get some coding experience (studying information technology does not teach you coding sadly. at least i know what a tree is now and can even visualize one in my head! [it looks sad :c]).

Also this is one of the first larger projects i am actually committing to. Mistakes will happen.

### simplifying the process of structured document creation
#### Motivation
Especially LaTeX has drifted away from simple document creation, as it allows for very advanced processing of documents, resulting from the benefits of TeX being a programming language accessible from the document itself. 
This can have a lot of benefits, but usually one is bound to the structural requirements of an organization, such as an University or company. 
So it'd be best (in my opinion) to seperate the concerns of "creating/writing a document" and "formatting the document" (as you'd naturally do in Microsoft Office Word or similar products).

###### Note: Yes i am aware that this is the main discipline/focus of TeX as well. While i could simply implement a LaTeX markup, instead i want to use a minimalistic syntax from the start and avoid TeX as a barrier inbetween. This will likely result in way less features, but can hopefully be an alternative to TeX, which looks less like source code (which most people dislike looking at, for some reason).

#### Approach and Layers
As known from image-processing software (Adobe PhotoShop, Gimp, ...) a common method to manipulate a picture is by seperating it into different layers. 
Instead of starting in a programming language, like TeX, a more natural workflow would start in simple text or markdown (texts...). 
In this most abstract layer very simplistic commands would define chapters or sections of the document. Any changes in this layer would affect the layers below.
Below this abstraction layer the user should be able to switch to a more advanced layer, for in-page manipulations/tweaks, if needed (like text folding around an image for example).

- Abstraction Layer (Markdown)
- Detail Layer (Something else, not sure yet)
- Correction Layer (Not technical, see "adding modern, advanced features")
- Tag Layer (automated tagging/summaries for paragraphs or chapters as a machine-based proof-reading) !NOTE: proof-reading. the intent of this program is not to write the paper itself. This could potentially lead to pretty looking graphs :)

#### Supported/Integrated structures in the document/program
Some general structures i intend to support/use in documents would be:
- tables
- mathematical equation typesetting
- references
- plots (from csv or functions)
- images
- ...
- lists (of chapters, images, plots, references)

For more information see [docs](docs/paper-structure.md).

### adding modern, advanced features
okay. using the terms "modern" and "advanced" is a bit of a reach.
my main intend is to implement something i want to dub "logic checking", next to known grammar and spell-checking.
This "logic checking" would simply highlight/colorcode sections in a seperate tab/layer called the "correction layer" (for now, WIP).
I'd like to use technologies like GPT in order to achieve the answer to a question i often ask myself, whenever i am too lazy to re-read my self-written texts: 
"Does this make sense?". Sometimes i just hope to magically write something that sounds smart and is somehow correct. I blame it on the unavoidable modern day brain fog.
An AI could catch some "brain malfunctions" that could happen when being overworked/stressed (or being affected by another mental issue that affects productivity).
The texts from the document will be tested for correctness of contents (not just linguistical correctness). This sounds simple as of now, but could likely turn out to be a pain.


### workflow/usage
this project has started on 2025-11-22. 
right now i'm still in the process of figuring things out, but i think a nice start would be a browser based application (i.e. i do not want to deal with the creation of a gui quite yet).
think: overleaf, but with an additional abstraction layer above

#### further ideas
- export features to xhtml and tex?
