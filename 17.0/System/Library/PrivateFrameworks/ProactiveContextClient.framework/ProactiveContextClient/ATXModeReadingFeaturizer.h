@interface ATXModeReadingFeaturizer : ATXModeAppLaunchFeaturizer

- (int)modeFeatureType;
- (id)additionalAllowedBundleIds;
- (unsigned long long)expectedGenreId;
- (id)registrationId;

@end
