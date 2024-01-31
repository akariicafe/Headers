@class WFAskForInputResult;

@interface WFAskForInputIntentResponse : INIntentResponse

@property (nonatomic) long long code;
@property (copy, nonatomic) WFAskForInputResult *result;

- (id)initWithCode:(long long)a0 userActivity:(id)a1;

@end
