# Benthic Cam Docker Notes #

**NOTE: Before using docker, it needs to be installed. Please follow the instructions [here](https://docs.docker.com/engine/install/).**

## Image ##

A docker image can be built from the _Dockerfile_ in the root folder of the extension repository. The image can be built using the command line:

```
docker build -t revive/benthic-cam:v0.1 .
```

where _tag_ (-t) will take the image as "revive/benthic-cam" with version 0.1. Note that this needs to be run with _root_ permissions.
