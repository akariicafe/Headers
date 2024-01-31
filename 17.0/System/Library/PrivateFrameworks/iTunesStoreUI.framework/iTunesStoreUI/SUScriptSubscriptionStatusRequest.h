@class NSString;

@interface SUScriptSubscriptionStatusRequest : SUScriptObject {
    long long _carrierBundleProvisioningStyle;
    BOOL _ignoreCache;
    long long _reason;
    long long _service;
    BOOL _wantsPartialResults;
}

@property (copy) NSString *carrierBundleProvisioningStyleName;
@property id ignoreCache;
@property (copy) NSString *reasonName;
@property (copy) NSString *serviceName;
@property id wantsPartialResults;
@property (readonly) NSString *reasonNameDeepLink;
@property (readonly) NSString *serviceNameAppleMusic;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)a0;
+ (id)webScriptNameForKeyName:(id)a0;

- (id)init;
- (id)_className;
- (id)attributeKeys;
- (id)scriptAttributeKeys;
- (void)_handleRequestCompletionWithSubscriptionStatus:(id)a0 isFinal:(BOOL)a1 scriptCallbackFunction:(id)a2;
- (void)performRequestWithCallbackFunction:(id)a0;

@end
