@class NSOperationQueue, NSArray, VSOptional;

@interface VSFeaturedIdentityProviderLimitingOperation : VSAsyncOperation

@property (retain, nonatomic) NSOperationQueue *privateQueue;
@property (copy, nonatomic) NSArray *unlimitedIdentityProviders;
@property (retain, nonatomic) VSOptional *result;

- (id)init;
- (void)executionDidBegin;
- (void).cxx_destruct;

@end
