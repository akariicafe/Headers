@class NSString, NSArray, NSURL, NSMutableDictionary, SSBag, SSVPlatformContext, NSObject, NSNumber;
@protocol OS_dispatch_queue;

@interface SSVPlatformRequestOperation : NSOperation {
    NSMutableDictionary *_additionalHeaderFields;
    NSMutableDictionary *_additionalParameters;
    NSString *_caller;
    SSVPlatformContext *_context;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSArray *_itemIdentifiers;
    NSArray *_bundleIdentifiers;
    NSString *_imageProfile;
    NSString *_keyProfile;
    long long _personalizationStyle;
    id /* block */ _responseBlock;
    NSString *_storeFrontSuffix;
    NSNumber *_timeoutInterval;
    NSString *_userAgent;
}

@property (copy) NSArray *itemIdentifiers;
@property (copy) NSArray *bundleIdentifiers;
@property (copy) NSString *imageProfile;
@property (copy) NSString *keyProfile;
@property long long personalizationStyle;
@property (copy) NSString *storeFrontSuffix;
@property (copy) NSNumber *timeoutInterval;
@property BOOL shouldSuppressCookies;
@property BOOL shouldSuppressUserInfo;
@property (copy) NSURL *mainDocumentURL;
@property unsigned long long attribution;
@property (copy) id /* block */ responseBlock;
@property (retain, nonatomic) SSBag *bag;

- (void)setValue:(id)a0 forHTTPHeaderField:(id)a1;
- (id)init;
- (void)main;
- (void)setValue:(id)a0 forRequestParameter:(id)a1;
- (id)valueForHTTPHeaderField:(id)a0;
- (void).cxx_destruct;
- (id)_URLBagContext;
- (id)_callerValue;
- (void)_enumerateQueryParametersUsingBlock:(id /* block */)a0;
- (id)_lookupWithRequest:(id)a0 error:(id *)a1;
- (void)_makeLocalJSSignRequest;
- (void)_makeLocalMescalRequest;
- (void)_makeLookupRequestWithPersonalizationStyle:(long long)a0;
- (void)_setCaller:(id)a0;
- (void)_setUserAgent:(id)a0;
- (id)initWithPlatformContext:(id)a0;
- (id)valueForRequestParameter:(id)a0;

@end
