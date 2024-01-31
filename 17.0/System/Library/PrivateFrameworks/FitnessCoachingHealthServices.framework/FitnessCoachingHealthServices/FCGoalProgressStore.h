@class HDProfile;

@interface FCGoalProgressStore : NSObject {
    HDProfile *_profile;
}

- (id)initWithProfile:(id)a0;
- (id)currentConfiguration;
- (id)_userDefaultsDomain;
- (id)_legacyDefaultsDomain;
- (void).cxx_destruct;
- (void)storeFiredEventDate:(id)a0 identifier:(id)a1;
- (void)storeCurrentConfiguration:(id)a0;
- (id)lastFiredEventDateForIdentifier:(id)a0;

@end
