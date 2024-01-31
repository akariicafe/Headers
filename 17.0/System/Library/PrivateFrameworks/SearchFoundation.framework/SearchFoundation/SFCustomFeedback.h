@class NSDictionary, NSData;

@interface SFCustomFeedback : SFFeedback

@property (nonatomic) unsigned long long feedbackType;
@property (copy, nonatomic) NSDictionary *jsonFeedback;
@property (copy, nonatomic) NSData *data;

+ (BOOL)supportsSecureCoding;

- (id)initWithType:(unsigned long long)a0 jsonFeedback:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithType:(unsigned long long)a0 data:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
