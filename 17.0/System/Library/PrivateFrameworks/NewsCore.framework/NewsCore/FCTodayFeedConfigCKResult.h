@class NSData, NSDictionary;

@interface FCTodayFeedConfigCKResult : NSObject

@property (readonly, nonatomic) NSData *configData;
@property (readonly, nonatomic) NSDictionary *recordsByType;

- (void).cxx_destruct;
- (id)initWithRecordsByType:(id)a0;

@end
