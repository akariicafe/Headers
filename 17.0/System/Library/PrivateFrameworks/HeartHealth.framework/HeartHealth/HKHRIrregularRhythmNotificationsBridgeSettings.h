@class NSString, HKHRIrregularRhythmNotificationsBridgeFooter;

@interface HKHRIrregularRhythmNotificationsBridgeSettings : NSObject

@property (readonly, nonatomic) BOOL isSettingHidden;
@property (readonly, nonatomic) BOOL areNotificationsOn;
@property (readonly, nonatomic) BOOL shouldLinkToOnboarding;
@property (readonly, nonatomic) BOOL isUserInteractionEnabled;
@property (readonly, copy, nonatomic) NSString *headerText;
@property (readonly, copy, nonatomic) HKHRIrregularRhythmNotificationsBridgeFooter *footer;

- (void).cxx_destruct;
- (id)initWithSettingHidden:(BOOL)a0 notificationsOn:(BOOL)a1 shouldLinkToOnboarding:(BOOL)a2 userInteractionEnabled:(BOOL)a3 headerText:(id)a4 footer:(id)a5;

@end
