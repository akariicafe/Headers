@class NSString, NSArray;

@interface MPCVocalAttenuationModel : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSArray *files;
@property (copy, nonatomic) NSString *basePath;
@property (copy, nonatomic) NSString *plistPath;
@property (nonatomic) unsigned long long blockSize;
@property (nonatomic) unsigned long long batchSize;
@property (nonatomic) unsigned long long sampleRate;
@property (nonatomic) unsigned long long lookaheadSize;
@property (nonatomic) unsigned long long taskIteration;
@property (nonatomic) double processingDelay;

+ (id)_filePathsForModelAtURL:(id)a0 error:(id *)a1;
+ (id)_plistForModelAtURL:(id)a0 error:(id *)a1;

- (id)description;
- (void).cxx_destruct;

@end
