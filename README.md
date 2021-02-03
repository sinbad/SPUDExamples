# SPUD Examples

This example project demonstrates the use of the 
[Steve's Persistent Unreal Data (SPUD)](https://github.com/sinbad/SPUD)
library.

[![Intro Video](http://img.youtube.com/vi/AzDoMGeJgi4/0.jpg)](http://www.youtube.com/watch?v=AzDoMGeJgi4 "Intro to SPUD")

## FAQ

### 1. The SPUD library is missing

This is because you haven't cloned the submodule as well - some git clients do this automatically, some don't.
If yours didn't, run these commands in the root of the examples repository:

```
git submodule init
git submodule update
```

Then build again.

