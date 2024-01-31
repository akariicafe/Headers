@interface INSendRideFeedbackIntentResponse : INIntentResponse

@property (readonly, nonatomic) long long code;

+ (BOOL)supportsSecureCoding;

- (id)_dictionaryRepresentation;
- (id)initWithBackingStore:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithCode:(long long)a0 userActivity:(id)a1;
- (id)initWithCode:(long long)a0 userActivity:(id)a1;

@end
