@class NSArray;

@interface MLCompilerResult : NSObject

@property (retain) NSArray *outputFiles;

+ (id)resultWithArchive:(void *)a0;
+ (id)resultWithOutputFiles:(id)a0;

- (void).cxx_destruct;

@end
