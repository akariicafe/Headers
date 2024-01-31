@class RTDefaultsManager, NSMutableArray;

@interface RTDailyTrainingSessionCounter : NSObject

@property (readonly, nonatomic) RTDefaultsManager *defaultsManager;
@property (readonly, nonatomic) NSMutableArray *metrics;

- (id)init;
- (void)reset;
- (void)submitMetrics;
- (id)initWithDefaultsManager:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)compoundKeyForMode:(unsigned long long)a0 reason:(unsigned long long)a1;
- (void)createMetrics;
- (void)increaseCountForMode:(unsigned long long)a0 reason:(unsigned long long)a1;
- (id)modeAndReasonFromCompoundKey:(id)a0;
- (BOOL)shouldSubmitMetrics;

@end
