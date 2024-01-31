@class NSString, NSMutableDictionary;

@interface WFMetricsManager : NSObject

@property (copy, nonatomic) NSString *processName;
@property (retain, nonatomic) NSMutableDictionary *ssidHashes;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (void)processEvent:(id)a0;
- (void)_submitCAEvent:(id)a0;

@end
