@class INInteraction;

@interface WFSiriOpenInteractionRequest : WFSiriActionRequest

@property (readonly, nonatomic) INInteraction *interaction;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithInteraction:(id)a0;

@end
