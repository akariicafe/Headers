@class HMLightProfileSettings, HMLightProfile;

@interface _HMLightProfile : _HMAccessoryProfile

@property (readonly) HMLightProfile *lightProfile;
@property (retain) HMLightProfileSettings *settings;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithUUID:(id)a0 services:(id)a1 settings:(id)a2;
- (void)_registerNotificationHandlers;
- (void)handleSettingsDidUpdate:(id)a0;

@end
