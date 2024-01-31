@class NSString;

@interface SCWPreferences : NSObject {
    NSString *_requestCountryCode;
    NSString *_requestLanguageCode;
    NSString *_acceptLanguageCode;
}

@property (retain) NSString *requestCountryCode;
@property (retain) NSString *requestLanguageCode;
@property (retain) NSString *acceptLanguageCode;
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

@end
