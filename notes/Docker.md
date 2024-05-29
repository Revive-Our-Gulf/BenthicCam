# Benthic Cam Docker Notes #

**NOTE: Before using docker, it needs to be installed. Please follow the instructions [here](https://docs.docker.com/engine/install/).**

## Image ##

A docker image can be built from the _Dockerfile_ in the root folder of the extension repository. The image can be built using the command line:

```
docker build -t revive/benthic-cam:v0.1 .
```

where _tag_ (-t) will take the image as "revive/benthic-cam" with version 0.1. Note that this needs to be run with _root_ permissions.


The generated image can be verified using:

```
docker image ls
```

To access the terminal (of the image) use the following command:

```
docker run -it --entrypoint /bin/bash revive/benthic-cam:v0.1
```

# Web Interface #

To run the web interface, launch the docker terminal as follows: 

```
docker run -p 8080:8000 -it --entrypoint /bin/bash revive/bent
hic-cam:v0.1
```

This exposes the "docker" port 8000 to the host port 8080. Next, navigate to the folder "app". Launch the testing script as follows:

```
python testing.py
```

This will kick off the site hosted within _flask_. The view the site, open up a web browser and navigate to _localhost:8080_.