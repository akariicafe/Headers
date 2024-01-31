@class NSString, AFExperimentContext, NSDictionary;

@interface _AFExperimentContextMutation : NSObject <AFExperimentContextMutating> {
    AFExperimentContext *_base;
    NSDictionary *_experimentsByConfigurationIdentifier;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasExperimentsByConfigurationIdentifier : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBase:(id)a0;
- (id)getExperimentsByConfigurationIdentifier;
- (BOOL)isDirty;
- (void).cxx_destruct;
- (void)setExperimentsByConfigurationIdentifier:(id)a0;

@end
