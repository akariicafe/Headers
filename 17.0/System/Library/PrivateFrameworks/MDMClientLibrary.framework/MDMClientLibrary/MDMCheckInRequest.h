@interface MDMCheckInRequest : NSObject

+ (id)_createNoInstallationError;
+ (id)_createUnsupportedFeatureError;
+ (void)executeRequestForMessageType:(id)a0 channelType:(unsigned long long)a1 requestDict:(id)a2 completionHandler:(id /* block */)a3;

@end
