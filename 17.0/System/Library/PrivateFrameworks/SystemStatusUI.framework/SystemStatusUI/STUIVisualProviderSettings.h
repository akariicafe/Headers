@class NSString;

@interface STUIVisualProviderSettings : PTSettings

@property (nonatomic) BOOL redInSpringBoard;
@property (retain, nonatomic) NSString *visualProviderClassName;
@property (nonatomic) BOOL promoteThermalWarning;
@property (nonatomic) BOOL enableActivity;
@property (nonatomic) double backgroundActivityCoalescingDelay;
@property (nonatomic) BOOL showVPNDisconnect;
@property (nonatomic) BOOL legacyPhoneUsesiPadLayout;
@property (nonatomic) BOOL fullWidthBackgroundActivity;
@property (nonatomic) BOOL showsDateBeforeTime;
@property (nonatomic) BOOL hasBoldTime;

+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (void).cxx_destruct;

@end
