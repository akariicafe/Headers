@class NSString;

@interface FTMutableBatchTranslationLoggingRequest : FTBatchTranslationLoggingRequest

@property (copy, nonatomic) NSString *session_id;
@property (nonatomic) int time_to_first_response;
@property (nonatomic) int time_to_viewport_complete;
@property (nonatomic) int time_to_page_complete;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
