@class UABestAppSuggestion;

@interface _SBUABestAppSuggestion : SBBestAppSuggestion {
    UABestAppSuggestion *_appSuggestion;
}

- (id)lastUpdateTime;
- (id)activityType;
- (unsigned long long)hash;
- (id)bundleIdentifier;
- (void).cxx_destruct;
- (id)uniqueIdentifier;
- (BOOL)isEqual:(id)a0;
- (BOOL)isHandoff;
- (id)originatingDeviceName;
- (id)originatingDeviceType;
- (id)originatingDeviceIdentifier;
- (BOOL)isLocationBasedSuggestion;
- (BOOL)isCallContinuitySuggestion;
- (BOOL)isLocallyGeneratedSuggestion;
- (BOOL)isNotificationSuggestion;
- (BOOL)isOpenURLSuggestion;

@end
