#!/bin/bash
BUILD_DIR=/home/pulkit/pkgs/openpose/build
DATA_DIR=/home/common/tmp
${BUILD_DIR}/examples/openpose/openpose.bin --image_dir /home/common/tmp/vid_92254/frames --no_display true\
            --write_images /home/pulkit/pkgs/openpose/results\
            --write_coco_json /home/pulkit/pkgs/openpose/results/coco.json\
            --model_folder /home/pulkit/pkgs/openpose/models