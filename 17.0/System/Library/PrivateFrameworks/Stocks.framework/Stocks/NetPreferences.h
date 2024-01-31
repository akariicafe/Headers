@class NSString;

@interface NetPreferences : NSObject {
    NSString *_buildVersion;
    NSString *_productVersion;
    BOOL _serviceDebugging;
    BOOL _isNetworkReachable;
    NSString *_requestCountryCode;
    NSString *_requestLanguageCode;
    NSString *_acceptLanguageCode;
}

@property (retain) NSString *requestCountryCode;
@property (retain) NSString *requestLanguageCode;
@property (retain) NSString *acceptLanguageCode;
@property (nonatomic, getter=isNetworkReachable) BOOL networkReachable;
@property (readonly, nonatomic) NSString *UUID;

+ (void)clearSharedPreferences;
+ (id)sharedPreferences;

- (id)init;
- (id)stocksLanguageCode;
- (id)stocksYQLBaseURL;
- (void)resetLocale;
- (id)stocksCountryCode;
- (id)stocksLanguageCodeForLanguage:(id)a0;
- (void).cxx_destruct;
- (id)signedRequestForURL:(id)a0 parameters:(id)a1;
- (id)_stocksUserAgent;
- (id)_stocksAcceptLanguage;
- (id)_cacheDirectoryPath;
- (id)backsideLogoURL;
- (id)logoButtonImage;
- (id)_urlStringWithHost:(id)a0;
- (void)addStocksHeadersToPostRequest:(id)a0;
- (id)defaultBacksideLogoURL;
- (id)financeRequestAttributes;
- (id)fullQuoteURLOverrideForStock:(id)a0;
- (id)logoBacksideImage;
- (BOOL)serviceDebugging;
- (id)serviceDebuggingPath;

@end
