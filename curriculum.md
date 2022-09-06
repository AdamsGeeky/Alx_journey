## spring one
Git & command line editors
- Introduction to Bash
- C - first statements
- C - pointers
- C - recursion
- C - static library
- C - memory allocation
- C - preprocessor
- C - variadic functions
- C - bit manipulation
- C - file I/O
- Singly linked lists
- Create your own printf
- Create your own Shell
... 

## spring two
- Python - first statements
- Python - import & modules
- Python - data structures
- Python - exceptions
- Python - classes
- Python - inheritance
- Python - file I/O
- Python - JSON serialization / deserialization
- HTML/CSS introduction
- SQL - basic queries
- SQL - join queries
- C - dynamic libraries
- C - makefiles
- Doubly linked lists
- Stack and Queues
- Hash tables
- Sorting algorithms
- Binary trees
- Bash - scripting
- Unix processes and signals
- Regex
- Network introduction
# spring three
- Python - Object-relational mapping
- Python - Web framework
- Python - RESTful API
- Python - web scraping
- Javascript - first statements
- Javascript - objects
- Javascript - scopes and closures
- Javascript - web scraping
- Search algorithms
- SSH
- SSL certificate
- Web server
- Load balancer
- Firewall
- MySQL primary-replica
- Server monitoring
- Code deployment
- Postmortem
- Webstack debugging
- Portfolio project
# specialization 
## Front end 
- ES6 introduction / promise
- ES6 classes / data manipulation
- TypeScript
- HTML / CSS advanced
- Developer tools
- Responsive design
- Webpack
- React introduction / props
- React component
- React inline-styling
- React state / immutable
- React Redux - action creator/normalizr
- React Redux -reducer/selector
- React Redux -connector/provider
## Back end 
- ES6 introduction / promise
- ES6 classes / data manipulation
- TypeScript
- Python
- async
- MySQL advanced
- NoSQL introduction
- Redis introduction
- API Pagination
- Caching algorithms
- Unit & integration tests
- i18n
- Personal data
- User authentications
- Node JS introduction
- Queuing system
- GraphQL API
- Async file API

Magic number
The shebang is actually a human-readable instance of a magic number in the executable file, the magic byte string being 0x23 0x21, the two-character encoding in ASCII of #!. This magic number is detected by the "exec" family of functions, which determine whether a file is a script or an executable binary. The presence of the shebang will result in the execution of the specified executable, usually an interpreter for the script's language. It has been claimed[20] that some old versions of Unix expect the normal shebang to be followed by a space and a slash (#! /), but this appears to be untrue;[21] rather, blanks after the shebang have traditionally been allowed, and sometimes documented with a space (see the 1980 email in history section below).[citation needed]

The shebang characters are represented by the same two bytes in extended ASCII encodings, including UTF-8, which is commonly used for scripts and other text files on current Unix-like systems. However, UTF-8 files may begin with the optional byte order mark (BOM); if the "exec" function specifically detects the bytes 0x23 and 0x21, then the presence of the BOM (0xEF 0xBB 0xBF) before the shebang will prevent the script interpreter from being executed. Some authorities recommend against using the byte order mark in POSIX (Unix-like) scripts,[22] for this reason and for wider interoperability and philosophical concerns. Additionally, a byte order mark is not necessary in UTF-8, as that encoding does not have endianness issues; it serves only to identify the encoding as UTF-8.[citation needed]