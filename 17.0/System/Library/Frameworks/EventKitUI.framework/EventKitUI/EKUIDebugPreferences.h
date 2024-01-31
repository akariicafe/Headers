@class CalPreferences;

@interface EKUIDebugPreferences : NSObject {
    CalPreferences *_preferences;
}

@property (nonatomic) BOOL showInviteesAndMoreRegion;
@property (nonatomic) BOOL showReportAProblemNotificationButton;

+ (id)shared;

- (id)init;
- (void).cxx_destruct;

@end
