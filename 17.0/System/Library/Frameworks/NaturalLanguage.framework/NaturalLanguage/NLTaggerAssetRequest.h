@class NSString;

@interface NLTaggerAssetRequest : NSObject {
    NSString *_language;
    NSString *_tagScheme;
    id /* block */ _completionHandler;
}

+ (void)checkAssetRequests;

- (void)completeWithResult:(long long)a0 error:(id)a1;
- (void).cxx_destruct;
- (BOOL)isFulfilled;
- (id)initWithLanguage:(id)a0 tagScheme:(id)a1 completionHandler:(id /* block */)a2;
- (void)waitForFulfillment;

@end
