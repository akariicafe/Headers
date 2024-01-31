@interface SSRVoiceProfileStorePrefs : NSObject

+ (id)sharedStorePrefs;

- (long long)getVoiceProfileStoreVersion;
- (id)loadKnownUserVoiceProfiles;
- (void)saveKnownUserVoiceProfiles:(id)a0;
- (void)setVoiceProfileStoreVersion:(unsigned long long)a0;

@end
