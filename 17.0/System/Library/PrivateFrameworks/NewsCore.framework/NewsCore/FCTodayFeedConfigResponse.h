@class NSData, NSDictionary;

@interface FCTodayFeedConfigResponse : NSObject

@property (readonly, nonatomic) NSData *ckConfigData;
@property (readonly, nonatomic) NSDictionary *ckRecordsByType;
@property (readonly, nonatomic) NSData *newsEdgeConfigData;

- (void).cxx_destruct;
- (id)initWithCKConfigData:(id)a0 ckRecordsByType:(id)a1 newsEdgeConfigData:(id)a2;

@end
