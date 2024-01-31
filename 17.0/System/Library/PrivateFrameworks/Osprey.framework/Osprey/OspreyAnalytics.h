@interface OspreyAnalytics : NSObject

+ (id)reporter;

- (void)reportEvent:(id)a0 payload:(id)a1;
- (void)_addURL:(id)a0 toContext:(id)a1;
- (void)reportAbsintheMetrics:(id)a0;
- (void)reportConnectionMetrics:(id)a0;
- (void)reportError:(id)a0 forURL:(id)a1;
- (void)reportHttpStatus:(long long)a0 grpcStatus:(long long)a1 forURL:(id)a2;

@end
