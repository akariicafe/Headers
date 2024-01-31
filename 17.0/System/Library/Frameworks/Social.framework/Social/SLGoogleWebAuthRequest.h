@class NSString;

@interface SLGoogleWebAuthRequest : NSObject <SLWebAuthRequest>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_parametersForClientID:(id)a0 redirectURI:(id)a1 scope:(id)a2 username:(id)a3 codeChallenge:(id)a4;
+ (id)authCodeFromRedirectURL:(id)a0;
+ (id)authCodeFromWebPageTitle:(id)a0;
+ (void)clearCookiesFromStorage:(id)a0 authRequestURL:(id)a1;
+ (id)requestForURL:(id)a0;
+ (id)urlForClientID:(id)a0 redirectURI:(id)a1 scope:(id)a2 username:(id)a3 authRequestURL:(id)a4;
+ (id)urlForClientID:(id)a0 redirectURI:(id)a1 scope:(id)a2 username:(id)a3 authRequestURL:(id)a4 codeChallenge:(id)a5;
+ (BOOL)urlPageWillContainAuthorizationCode:(id)a0;
+ (id)urlRequestForClientID:(id)a0 redirectURI:(id)a1 scope:(id)a2 username:(id)a3 authRequestURL:(id)a4;


@end
