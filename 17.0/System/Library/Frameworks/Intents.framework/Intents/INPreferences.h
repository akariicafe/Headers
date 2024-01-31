@class NSString, _INVocabularyConnection;

@interface INPreferences : NSObject {
    _INVocabularyConnection *_assistantdConnection;
}

@property (copy, setter=_setCachedSiriLanguageCode:) NSString *_cachedSiriLanguageCode;

+ (id)siriLanguageCode;
+ (void)requestSiriAuthorization:(id /* block */)a0;
+ (id)sharedPreferences;
+ (void)_verifyProcessCanDonateIntentWithName:(id)a0 completion:(id /* block */)a1;
+ (long long)siriAuthorizationStatus;

- (id)init;
- (void)_updateWithExtensionContext:(id)a0;
- (id)_init;
- (BOOL)_weAreRunningAsAnExtension;
- (void)_THROW_EXCEPTION_FOR_PROCESS_MISSING_ENTITLEMENT_com_apple_developer_siri;
- (void)requestSiriAuthorization:(id /* block */)a0;
- (id)_siriLanguageCode;
- (long long)_siriAuthorizationStatus;
- (void).cxx_destruct;
- (void)assertThisProcessHasSiriEntitlement;
- (void)_verifyProcessCanDonateIntentWithName:(id)a0 completion:(id /* block */)a1;

@end
