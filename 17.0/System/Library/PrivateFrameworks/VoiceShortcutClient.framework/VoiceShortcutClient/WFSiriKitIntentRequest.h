@class INIntent;

@interface WFSiriKitIntentRequest : WFSiriActionRequest

@property (readonly, nonatomic) INIntent *intent;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithIntent:(id)a0;
- (id)initWithCoder:(id)a0;

@end
