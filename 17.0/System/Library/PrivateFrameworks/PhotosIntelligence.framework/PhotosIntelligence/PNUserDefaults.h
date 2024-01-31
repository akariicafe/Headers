@interface PNUserDefaults : NSObject

@property (class, readonly) long long promoterStatusMergeCandidateLimit;
@property (class, readonly) long long promoterStatusVerifiedPersonLimit;
@property (class, readonly) BOOL locationCurationAvoidPeople;

+ (void)initialize;
+ (void)_registerDefaults;

@end
