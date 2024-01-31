@class UIImage;

@interface PCTelephonyActivity : NSUserActivity <PCActivity> {
    UIImage *_callImage;
    BOOL _hostedOnCurrentDeviceIsValid;
    BOOL _hostedOnCurrentDevice;
}

- (id)image;
- (id)contactIdentifier;
- (id)description;
- (id)activityString;
- (id)bundleIdentifier;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)title;
- (BOOL)isEqual:(id)a0;
- (id)displayName;
- (id)initWithActivity:(id)a0;
- (id)callUUID;
- (id)dateConnected;
- (BOOL)hostedOnCurrentDevice;
- (unsigned long long)pcactivityType;
- (id)callImage;
- (BOOL)hostedOnCurrentDeviceIsValid;
- (id)initFromKnownCall:(id)a0;
- (id)initFromSensitiveCall:(id)a0;

@end
