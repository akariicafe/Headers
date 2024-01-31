@class NSArray, NSString, MLModel;

@interface SNDetectVoiceTriggerRequest : NSObject <SNAnalyzerCreating, SNRequest> {
    MLModel *_model;
}

@property (readonly, nonatomic) double sampleRate;
@property (nonatomic) long long hopSizeSamples;
@property (nonatomic) long long blocksBetweenTriggers;
@property (copy, nonatomic) NSArray *commands;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithModel:(id)a0 dictionary:(id)a1 error:(id *)a2;
- (id)createAnalyzerWithError:(id *)a0;

@end
