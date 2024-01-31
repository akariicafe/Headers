@class MMapStruct, SRResources;

@interface SREMusicRetrievalModel : NSObject

@property (retain, nonatomic) MMapStruct *modelMMap;
@property (retain, nonatomic) SRResources *resources;

+ (id)sharedInstance;

- (id)initWithError:(id *)a0;
- (void).cxx_destruct;
- (BOOL)_loadModelWithError:(id *)a0;
- (id)inferenceWithSequence:(id)a0 query:(id)a1 error:(id *)a2;

@end
