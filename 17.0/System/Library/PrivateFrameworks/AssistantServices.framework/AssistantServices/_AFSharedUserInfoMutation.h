@class NSString, AFCompanionDeviceInfo, AFSharedUserInfo;

@interface _AFSharedUserInfoMutation : NSObject <AFSharedUserInfoMutating> {
    AFSharedUserInfo *_base;
    NSString *_sharedUserId;
    NSString *_loggableSharedUserId;
    AFCompanionDeviceInfo *_companionDeviceInfo;
    BOOL _personalRequestsEnabled;
    BOOL _companionLinkReady;
    NSString *_homeUserId;
    NSString *_iCloudAltDSID;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasSharedUserId : 1; unsigned char hasLoggableSharedUserId : 1; unsigned char hasCompanionDeviceInfo : 1; unsigned char hasPersonalRequestsEnabled : 1; unsigned char hasCompanionLinkReady : 1; unsigned char hasHomeUserId : 1; unsigned char hasICloudAltDSID : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBase:(id)a0;
- (BOOL)isDirty;
- (void).cxx_destruct;
- (id)getSharedUserId;
- (id)getCompanionDeviceInfo;
- (BOOL)getCompanionLinkReady;
- (id)getHomeUserId;
- (id)getICloudAltDSID;
- (id)getLoggableSharedUserId;
- (BOOL)getPersonalRequestsEnabled;
- (void)setCompanionDeviceInfo:(id)a0;
- (void)setCompanionLinkReady:(BOOL)a0;
- (void)setHomeUserId:(id)a0;
- (void)setICloudAltDSID:(id)a0;
- (void)setLoggableSharedUserId:(id)a0;
- (void)setPersonalRequestsEnabled:(BOOL)a0;
- (void)setSharedUserId:(id)a0;

@end
