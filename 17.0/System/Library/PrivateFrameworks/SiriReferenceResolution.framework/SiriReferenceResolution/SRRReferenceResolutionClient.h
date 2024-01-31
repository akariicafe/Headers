@class SRRReferenceResolutionClientInternal;

@interface SRRReferenceResolutionClient : NSObject

@property (readonly) SRRReferenceResolutionClientInternal *underlyingObject;

- (id)init;
- (void).cxx_destruct;
- (void)collectSalientEntityStringsWithCompletion:(id /* block */)a0;
- (void)collectSalientStringsWithCompletion:(id /* block */)a0;

@end
