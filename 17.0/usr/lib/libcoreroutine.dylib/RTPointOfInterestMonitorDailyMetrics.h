@class RTDefaultsManager, NSMutableDictionary;

@interface RTPointOfInterestMonitorDailyMetrics : NSObject

@property (readonly, nonatomic) RTDefaultsManager *defaultsManager;
@property (readonly, nonatomic) NSMutableDictionary *metrics;

- (id)init;
- (void)reset;
- (id)initWithDefaultsManager:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)submit;
- (BOOL)shouldSubmit;
- (void)create;
- (void)increaseCountForKey:(id)a0;

@end
