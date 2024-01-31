@interface NNMKURLRequest : NSObject

+ (id)serverFriendlyDescription;
+ (id)_osName;
+ (id)_osVersion;
+ (id)_systemVersionDictionary;
+ (id)_hardwareModel;
+ (id)_buildNumber;
+ (void)_formBodyRequestWithBaseURLString:(id)a0 path:(id)a1 body:(id)a2 method:(id)a3 token:(id)a4 errorParser:(id /* block */)a5 completion:(id /* block */)a6;
+ (void)_getRequestWithBaseURLString:(id)a0 path:(id)a1 params:(id)a2 token:(id)a3 errorParser:(id /* block */)a4 completion:(id /* block */)a5;
+ (void)_handleRequest:(id)a0 errorParser:(id /* block */)a1 completion:(id /* block */)a2;
+ (void)_jsonBodyRequestWithBaseURLString:(id)a0 path:(id)a1 body:(id)a2 method:(id)a3 token:(id)a4 needsBAA:(BOOL)a5 errorParser:(id /* block */)a6 completion:(id /* block */)a7;
+ (id)_methodNameForType:(unsigned long long)a0;
+ (void)formPostRequestWithBaseURLString:(id)a0 path:(id)a1 body:(id)a2 token:(id)a3 completion:(id /* block */)a4;
+ (void)getRequestWithBaseURLString:(id)a0 path:(id)a1 params:(id)a2 token:(id)a3 completion:(id /* block */)a4;
+ (id)mailNotificationURL;
+ (void)patchRequestWithBaseURLString:(id)a0 path:(id)a1 body:(id)a2 token:(id)a3 completion:(id /* block */)a4;
+ (void)postRequestWithBaseURLString:(id)a0 path:(id)a1 body:(id)a2 token:(id)a3 completion:(id /* block */)a4;
+ (void)postRequestWithBaseURLString:(id)a0 path:(id)a1 body:(id)a2 token:(id)a3 needsBAA:(BOOL)a4 completion:(id /* block */)a5;
+ (void)requestWithType:(unsigned long long)a0 baseURLString:(id)a1 path:(id)a2 body:(id)a3 token:(id)a4 needsBAA:(BOOL)a5 errorParser:(id /* block */)a6 completion:(id /* block */)a7;

@end
