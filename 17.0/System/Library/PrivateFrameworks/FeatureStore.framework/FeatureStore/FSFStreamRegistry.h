@interface FSFStreamRegistry : NSObject

+ (id)readFileInToDict;
+ (id)registryFilePath;
+ (BOOL)writeDict:(id)a0;

- (id)getRegisteredStreams;
- (BOOL)registerForStream:(id)a0 withSchema:(id)a1 error:(id *)a2;

@end
