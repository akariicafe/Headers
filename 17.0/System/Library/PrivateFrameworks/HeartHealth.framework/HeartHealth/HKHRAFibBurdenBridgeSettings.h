@class HKHRAFibBurdenFooter;

@interface HKHRAFibBurdenBridgeSettings : NSObject

@property (nonatomic) BOOL settingVisible;
@property (nonatomic) BOOL settingEnabled;
@property (nonatomic) BOOL showOnboarding;
@property (retain, nonatomic) HKHRAFibBurdenFooter *footer;

+ (id)hiddenSettings;

- (void).cxx_destruct;
- (id)initWithSettingVisible:(BOOL)a0 settingEnabled:(BOOL)a1 showOnboarding:(BOOL)a2 footer:(id)a3;

@end
