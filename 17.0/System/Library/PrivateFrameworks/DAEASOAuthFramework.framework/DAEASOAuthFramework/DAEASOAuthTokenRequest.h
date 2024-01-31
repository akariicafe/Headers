@interface DAEASOAuthTokenRequest : NSObject

+ (id)claimsValueWithClaimsChallenge:(id)a0;
+ (id)_urlRequestForTokenRequestURI:(id)a0 params:(id)a1 clientID:(id)a2;
+ (id)oauthTokenRefreshRequestForTokenRequestURI:(id)a0 clientID:(id)a1 scope:(id)a2 refreshToken:(id)a3 claims:(id)a4;
+ (id)urlRequestForTokenRequestURI:(id)a0 clientID:(id)a1 redirectURI:(id)a2 authCode:(id)a3 scope:(id)a4 codeVerifier:(id)a5 claims:(id)a6;

@end
