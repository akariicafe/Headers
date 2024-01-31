@class NSString, NSArray;

@interface QSSMutableRecoverPronsResponse : QSSRecoverPronsResponse

@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) NSString *session_id;
@property (nonatomic) int error_code;
@property (copy, nonatomic) NSString *error_str;
@property (copy, nonatomic) NSArray *recovery_return_codes;
@property (copy, nonatomic) NSArray *voc_tokens;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
