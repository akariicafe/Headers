@class NSLocale, NSURLSession;

@interface PKPayLaterMerchandisingUtilities : NSObject {
    NSURLSession *_urlSession;
    NSLocale *_locale;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)_fragmentForModalConfiguration:(id)a0;
- (id)_baseURLComponents;
- (id)_dynamicMerchandisingURLWithRegionCode:(id)a0;
- (BOOL)_evaluateLocalChecksForConfiguration:(id)a0 outError:(id *)a1 invalidProperties:(id *)a2;
- (BOOL)_formValidationError:(id *)a0 underlyingError:(id)a1;
- (id)_localeString;
- (void)_performWebRequestForURL:(id)a0 completion:(id /* block */)a1;
- (id)_urlWithBaseURL:(id)a0 pathComponents:(id)a1 queryParameters:(id)a2 fragment:(id)a3;
- (void)_validateRemoteChecksForConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)clearWebRequestCache;
- (void)evaluateEligibilityForConfiguration:(id)a0 completion:(id /* block */)a1;
- (id)generateJavaScriptQueryForUpdatedProperty:(id)a0 newValue:(id)a1;
- (id)merchandisingBaseURLForEnviornmentType:(unsigned long long)a0;
- (id)merchandisingEligibilityURLWithConfiguration:(id)a0;
- (id)merchandisingModalURLWithConfiguration:(id)a0;
- (void)merchandisingWidgetHTMLWithConfiguration:(id)a0 completion:(id /* block */)a1;

@end
