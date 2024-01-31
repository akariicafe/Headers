@class NSString, AFCallStateSnapshot;

@interface _AFCallStateSnapshotMutation : NSObject <AFCallStateSnapshotMutating> {
    AFCallStateSnapshot *_base;
    unsigned long long _callState;
    BOOL _onSpeaker;
    BOOL _isDropInCall;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasCallState : 1; unsigned char hasOnSpeaker : 1; unsigned char hasIsDropInCall : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBase:(id)a0;
- (BOOL)isDirty;
- (void).cxx_destruct;
- (void)setCallState:(unsigned long long)a0;
- (BOOL)getIsDropInCall;
- (unsigned long long)getCallState;
- (BOOL)getOnSpeaker;
- (void)setIsDropInCall:(BOOL)a0;
- (void)setOnSpeaker:(BOOL)a0;

@end
