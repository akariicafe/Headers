@class NSString, NSNumber;

@interface FASettingsPresetsRequest : FAFamilyCircleRequest {
    NSString *_altDSID;
    NSNumber *_childAge;
}

- (void).cxx_destruct;
- (id)initWithFamilyMember:(id)a0;
- (id)fetchCachedPresets;
- (void)fetchCachedPresetsWithCompletion:(id /* block */)a0;
- (id)fetchPresets;
- (void)fetchPresetsWithCompletion:(id /* block */)a0;
- (id)initWithChildAge:(id)a0;
- (id)initWithFamilyMemberAltDSID:(id)a0;

@end
