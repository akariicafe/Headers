@class NSString;

@interface ATXGlobalAppModeAffinityPrior : NSObject

@property (nonatomic) unsigned long long mode;
@property (nonatomic) double prior;
@property (retain, nonatomic) NSString *bundleId;

- (void).cxx_destruct;
- (id)initWithMode:(unsigned long long)a0 prior:(double)a1 bundleId:(id)a2;

@end
