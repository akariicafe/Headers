@interface PRPreferences : NSObject

@property (class, readonly, nonatomic) PRPreferences *sharedPreferences;

@property (readonly, nonatomic, getter=isAlternateCalendarEnabled) BOOL alternateCalendarEnabled;

@end
