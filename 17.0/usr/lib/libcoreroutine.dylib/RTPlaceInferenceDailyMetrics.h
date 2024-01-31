@class RTDefaultsManager, NSMutableDictionary;

@interface RTPlaceInferenceDailyMetrics : NSObject

@property (readonly, nonatomic) RTDefaultsManager *defaultsManager;
@property (readonly, nonatomic) NSMutableDictionary *metrics;

- (id)init;
- (void)reset;
- (id)initWithDefaultsManager:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)submit;
- (BOOL)shouldSubmit;
- (id)getClientKeyForDefaultManager:(int)a0;
- (id)getClientKeyForDailyMetrics:(int)a0;
- (void)create;
- (void)increaseCountForClientMappingIndex:(int)a0;

@end
