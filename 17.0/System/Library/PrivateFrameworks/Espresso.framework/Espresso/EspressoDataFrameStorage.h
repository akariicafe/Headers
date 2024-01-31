@class NSString, NSMutableArray, NSMutableDictionary;

@interface EspressoDataFrameStorage : NSObject

@property (retain) NSMutableArray *dataFrames;
@property (retain) NSMutableDictionary *mappedFiles;
@property (retain) NSString *baseFilename;

+ (id)dataFrameStorageFromPath:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)dataFrameAtIndex:(unsigned long long)a0;
- (unsigned long long)numberOfDataFrames;

@end
