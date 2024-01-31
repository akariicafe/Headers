@class NSString;

@interface FTMutableStreamingTranslationRequest : FTStreamingTranslationRequest

@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) NSString *request_id;
@property (copy, nonatomic) NSString *task;
@property (copy, nonatomic) NSString *source_language;
@property (copy, nonatomic) NSString *target_language;
@property (copy, nonatomic) NSString *translation_text;
@property (copy, nonatomic) NSString *sequence_id;
@property (nonatomic) BOOL disable_log;
@property (nonatomic) long long opt_in_status;
@property (copy, nonatomic) NSString *app_id;
@property (nonatomic) BOOL final_message;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
