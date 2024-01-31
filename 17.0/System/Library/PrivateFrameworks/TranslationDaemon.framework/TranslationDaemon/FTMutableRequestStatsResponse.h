@class NSArray, NSString;

@interface FTMutableRequestStatsResponse : FTRequestStatsResponse

@property (copy, nonatomic) NSArray *bool_stats;
@property (copy, nonatomic) NSArray *int32_stats;
@property (copy, nonatomic) NSArray *double_stats;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) NSString *request_locale;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
