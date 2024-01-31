@class NSString, NSArray;

@interface FTMutablePostItnHammerRequest : FTPostItnHammerRequest

@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *post_itn_string;
@property (copy, nonatomic) NSArray *tokens;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
