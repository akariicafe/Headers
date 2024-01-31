@interface HLPCommonDefines : NSObject

+ (id)userName;
+ (void)setAuthenticationContext:(id)a0;
+ (id)clientID;
+ (BOOL)isInternalBuild;
+ (id)assetRequestHeaderFields;
+ (id)assetServiceTicket;
+ (id)contentRequestHeaderFields;
+ (id)contentServiceTicket;
+ (BOOL)hasServiceTicket;

@end
