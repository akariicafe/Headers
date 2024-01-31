@class NSString, NSMutableDictionary, NSDictionary;

@interface HLPAnalyticsEventController : NSObject

@property (retain, nonatomic) NSMutableDictionary *countersByKey;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *version;
@property (readonly, nonatomic) NSDictionary *requiredKeys;

+ (id)sharedInstance;

- (void)logAnalyticsEvent:(id)a0;
- (void).cxx_destruct;
- (void)configureWithHelpBookID:(id)a0 version:(id)a1;
- (id)counterForKey:(id)a0;
- (void)incrementCounterForKey:(id)a0;

@end
