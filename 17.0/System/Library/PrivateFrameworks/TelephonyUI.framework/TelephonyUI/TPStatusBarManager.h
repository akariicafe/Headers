@class NSTimer, NSString;

@interface TPStatusBarManager : NSObject

@property (retain, nonatomic) NSTimer *callDurationTimer;
@property (copy, nonatomic) NSString *currentAbbreviatedStatusBarString;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)updateCurrentAbbreviatedStatusBarString;
- (void)updateCurrentAbbreviatedStatusBarStringAndSendNotification;

@end
