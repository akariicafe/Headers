@class NSString, NSArray;

@interface QSSMutableLmScorerResponse : QSSLmScorerResponse

@property (nonatomic) int return_code;
@property (copy, nonatomic) NSString *return_str;
@property (copy, nonatomic) NSArray *tokens;
@property (nonatomic) double ppl;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
