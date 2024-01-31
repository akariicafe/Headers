@interface WFImgurAccount : WFOAuth2Account

+ (id)clientID;
+ (id)serviceID;
+ (id)serviceName;
+ (id)sessionManager;
+ (id)responseType;
+ (id)localizedServiceName;
+ (id)clientSecret;
+ (id)redirectURI;

- (void)refreshWithCompletionHandler:(id /* block */)a0;

@end
