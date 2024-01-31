@class NSString;

@interface FBKQuestionAnswerPair : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *questionText;
@property (retain, nonatomic) NSString *answerText;
@property (nonatomic) BOOL isRequired;
@property (nonatomic) unsigned long long answerType;

- (id)initWithJSONObject:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithQuestionText:(id)a0 andAnswerText:(id)a1;
- (BOOL)setPropertiesFromJSONObject:(id)a0;

@end
