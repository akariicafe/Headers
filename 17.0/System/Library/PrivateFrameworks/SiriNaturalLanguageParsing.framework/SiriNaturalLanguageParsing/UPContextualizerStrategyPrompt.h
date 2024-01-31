@class NSString, UPUsoSerializer;

@interface UPContextualizerStrategyPrompt : NSObject <UPContextualizerStrategy>

@property (readonly, nonatomic) double prebuiltIntentThreshold;
@property (readonly, nonatomic) UPUsoSerializer *usoSerializer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)resultUsingContextualizerInput:(id)a0;
- (id)initWithPrebuiltIntentThreshold:(double)a0 usoSerializer:(id)a1;

@end
