@interface APWebViewResourceLoadCAReporter : NSObject

+ (BOOL)_isHTTPOrHTTPSURL:(id)a0;
+ (void)_parseResourceLoadResultForError:(id)a0 response:(id)a1 result:(long long *)a2 errorDomain:(id *)a3 errorCode:(long long *)a4;

@end
