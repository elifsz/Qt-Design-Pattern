**Purpose:** The purpose of this pattern is to reduce the dependency between the client and the objects that fulfill the request. 

**How to do it:** There is a root object that fulfills the request, 
and if it can't fulfill this request on its own, it transfers it to other objects. 
But during the process, the client only knows about one object. 
As the name of the pattern suggests, 
a chain-like structure is formed on the target objects, and communication happens thanks to this. 
Notification for this communication is provided by the constructor or the set method. In the project I have implemented,
this process is performed with the _**setNextHandler**_ function.

**Uml of Qt Project**
![chain-of- responsiblity-uml](https://user-images.githubusercontent.com/44908865/235508336-941dc44e-e670-48ff-90e1-8cf7352042d6.png)
