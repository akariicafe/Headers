@class NSNumber;

@interface FAFetchScreenTimeSettingsCacheRequest : FAFamilyCircleRequest

@property (readonly, copy) NSNumber *memberDSID;

- (void)startRequestWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)enableSettings:(id *)a0;
- (id)initWithFamilyMemberDSID:(id)a0;

@end
