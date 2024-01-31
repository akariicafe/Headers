@class NSData, NSSet, INIntentResponse;

@interface INConfirmIntentForwardingActionResponse : INIntentForwardingActionResponse

@property (readonly, nonatomic) INIntentResponse *intentResponse;
@property (readonly, nonatomic) NSData *launchContextActivityData;
@property (readonly, nonatomic) NSSet *cacheItems;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithIntentResponse:(id)a0 launchContextActivityData:(id)a1 cacheItems:(id)a2 error:(id)a3;

@end
