@class NSNumber, FAScreentimeSettingsObjectCache;

@interface FASaveScreenTimeSettingsCacheRequest : FAFamilyCircleRequest

@property (copy) NSNumber *memberDSID;
@property (readonly, copy) FAScreentimeSettingsObjectCache *object;

- (void)startRequestWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithFamilyMemberDSID:(id)a0 screentimeObject:(id)a1;

@end
