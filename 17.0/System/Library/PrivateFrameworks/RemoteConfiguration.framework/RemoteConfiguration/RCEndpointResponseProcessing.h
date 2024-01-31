@interface RCEndpointResponseProcessing : NSObject

+ (id)_configurationErrorForErrorDicts:(id)a0;
+ (void)parseEndpointResponse:(id)a0 configurationSettings:(id)a1 maxAge:(id)a2 loggingPrefix:(id)a3 completion:(id /* block */)a4;

@end
