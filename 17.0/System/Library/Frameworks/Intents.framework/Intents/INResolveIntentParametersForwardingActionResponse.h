@class NSDictionary, INIntent;

@interface INResolveIntentParametersForwardingActionResponse : INIntentForwardingActionResponse

@property (readonly, nonatomic, getter=isSuccess) BOOL success;
@property (readonly, nonatomic) INIntent *updatedIntent;
@property (readonly, nonatomic) NSDictionary *parameterResolutionResults;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithSuccess:(BOOL)a0 updatedIntent:(id)a1 parameterResolutionResults:(id)a2 error:(id)a3;

@end
