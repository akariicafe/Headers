@class NSUserDefaults;

@interface TTSVBSettings : NSObject

@property (retain, nonatomic) NSUserDefaults *defaults;
@property (nonatomic) BOOL allowAppUsage;
@property (nonatomic) BOOL allowAppUsageDuringCalls;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;

@end
