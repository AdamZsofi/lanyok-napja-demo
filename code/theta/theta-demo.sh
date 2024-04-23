LD_LIBRARY_PATH=/home/solarowl/Repositories/theta/lib/ java -Xmx20G -Xss120M -Dfile.encoding=US-ASCII -jar ./theta-xcfa-cli-5.1.0-all.jar --input ../theta-version-code.c --stacktrace --backend CEGAR --output-directory ./output/

dot -Tpng -o output/trace.png output/trace.dot
