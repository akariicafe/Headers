@class NSString;

@interface CPLDeleteChainedRecordExtractionStep : CPLBatchExtractionStep

@property (readonly, nonatomic) Class recordClass;
@property (readonly, nonatomic) NSString *classDescription;
@property (readonly, nonatomic) unsigned long long maximumCount;

- (id)shortDescription;
- (void).cxx_destruct;
- (BOOL)extractToBatch:(id)a0 maximumCount:(unsigned long long)a1 maximumResourceSize:(unsigned long long)a2 error:(id *)a3;
- (id)initWithStorage:(id)a0 class:(Class)a1 classDescription:(id)a2 scopeIdentifier:(id)a3 maximumCount:(unsigned long long)a4;
- (BOOL)shouldResetFromThisStepWithIncomingChange:(id)a0;

@end
