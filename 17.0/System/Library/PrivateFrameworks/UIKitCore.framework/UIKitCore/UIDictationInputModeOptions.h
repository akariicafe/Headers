@class NSString;

@interface UIDictationInputModeOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *invocationSource;
@property (nonatomic) BOOL shouldStayInDictationInputModeIfAutoEndpointed;
@property (nonatomic) BOOL shouldSupressShowingAlternativesAutomatically;

+ (id)dictationInputModeOptionsWithInvocationSource:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
