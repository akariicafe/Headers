@class NSArray;

@interface INResolveIntentParametersForwardingAction : INIntentForwardingAction

@property (readonly, nonatomic) BOOL resolvesAllParameters;
@property (readonly, nonatomic) NSArray *parameterNames;

+ (BOOL)supportsSecureCoding;
+ (Class)responseClass;

- (BOOL)executeRemotelyWithVendorRemote:(id)a0 completionHandler:(id /* block */)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithIntent:(id)a0 parameterName:(id)a1;
- (void).cxx_destruct;
- (void)executeLocallyWithIntentDeliverer:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithCoder:(id)a0;
- (id /* block */)_completionHandlerForMultipleParametersWithActionCompletionHandler:(id /* block */)a0;
- (id /* block */)_completionHandlerForSingleParameterNamed:(id)a0 withActionCompletionHandler:(id /* block */)a1;
- (id)initWithIntent:(id)a0 parameterNames:(id)a1;

@end
