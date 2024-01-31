@class NSString, AFASRSharedUserInfo;

@interface _AFASRSharedUserInfoMutation : NSObject <AFASRSharedUserInfoMutating> {
    AFASRSharedUserInfo *_base;
    NSString *_sharedUserId;
    NSString *_loggableSharedUserId;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasSharedUserId : 1; unsigned char hasLoggableSharedUserId : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBase:(id)a0;
- (BOOL)isDirty;
- (void).cxx_destruct;
- (id)getSharedUserId;
- (id)getLoggableSharedUserId;
- (void)setLoggableSharedUserId:(id)a0;
- (void)setSharedUserId:(id)a0;

@end
