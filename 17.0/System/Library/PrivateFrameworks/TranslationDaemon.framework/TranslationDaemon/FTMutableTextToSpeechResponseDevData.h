@class NSString, FTQSSVersionInfo;

@interface FTMutableTextToSpeechResponseDevData : FTTextToSpeechResponseDevData

@property (copy, nonatomic) NSString *log;
@property (copy, nonatomic) FTQSSVersionInfo *server_info;
@property (nonatomic) BOOL has_click;
@property (copy, nonatomic) NSString *worker_process_type;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
