#!/bin/bash
ifconfig | grep -w ether | tr -s ' ' | cut -d ' ' -f 3


