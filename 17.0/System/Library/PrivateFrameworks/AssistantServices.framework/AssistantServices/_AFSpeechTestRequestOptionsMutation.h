@class NSString, NSArray, AFSpeechTestRequestOptions;

@interface _AFSpeechTestRequestOptionsMutation : NSObject <AFSpeechTestRequestOptionsMutating> {
    AFSpeechTestRequestOptions *_base;
    NSArray *_jitContext;
    NSString *_overrideModelPath;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasJitContext : 1; unsigned char hasOverrideModelPath : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBase:(id)a0;
- (BOOL)isDirty;
- (void).cxx_destruct;
- (id)getJitContext;
- (id)getOverrideModelPath;
- (void)setJitContext:(id)a0;
- (void)setOverrideModelPath:(id)a0;

@end
