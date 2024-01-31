@class NSString, AFSetAudioSessionActiveResult, NSError;

@interface _AFSetAudioSessionActiveResultMutation : NSObject <AFSetAudioSessionActiveResultMutating> {
    AFSetAudioSessionActiveResult *_base;
    unsigned int _audioSessionID;
    NSError *_error;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasAudioSessionID : 1; unsigned char hasError : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBase:(id)a0;
- (void)setAudioSessionID:(unsigned int)a0;
- (BOOL)isDirty;
- (id)getError;
- (unsigned int)getAudioSessionID;
- (void).cxx_destruct;
- (void)setError:(id)a0;

@end
