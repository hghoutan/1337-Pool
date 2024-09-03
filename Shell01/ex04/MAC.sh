#!/bin/bash
ifconfig | awk '/ether/ {print $2}' | grep -v autoselect
