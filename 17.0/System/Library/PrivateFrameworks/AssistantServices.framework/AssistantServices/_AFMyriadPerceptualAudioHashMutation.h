@class NSString, NSData, AFMyriadPerceptualAudioHash;

@interface _AFMyriadPerceptualAudioHashMutation : NSObject <AFMyriadPerceptualAudioHashMutating> {
    AFMyriadPerceptualAudioHash *_base;
    NSData *_data;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasData : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBase:(id)a0;
- (BOOL)isDirty;
- (void)setData:(id)a0;
- (id)getData;
- (void).cxx_destruct;

@end
