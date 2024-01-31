@interface FeedbackCore.FBKFixtureLoader : NSObject <FBKForegroundDataClient, FBKLoginManagerDelegate> {
    void /* unknown type, empty encoding */ bundle;
    void /* unknown type, empty encoding */ testFixtureDir;
    void /* unknown type, empty encoding */ Log;
    void /* unknown type, empty encoding */ logger;
}

- (id)init;
- (void).cxx_destruct;
- (void)dataForURL:(id)a0 success:(id /* block */)a1 error:(id /* block */)a2;
- (void)dataForURLRequest:(id)a0 success:(id /* block */)a1 error:(id /* block */)a2;
- (void)deleteResourceAtURL:(id)a0 success:(id /* block */)a1 error:(id /* block */)a2;
- (void)jsonForURL:(id)a0 success:(id /* block */)a1 error:(id /* block */)a2;
- (void)jsonForURLRequest:(id)a0 success:(id /* block */)a1 error:(id /* block */)a2;
- (void)postToURL:(id)a0 parameters:(id)a1 encoding:(unsigned long long)a2 success:(id /* block */)a3 error:(id /* block */)a4;
- (void)putToURL:(id)a0 parameters:(id)a1 encoding:(unsigned long long)a2 success:(id /* block */)a3 error:(id /* block */)a4;
- (void)dataForURL:(id)a0 successWithResponse:(id /* block */)a1 error:(id /* block */)a2;
- (void)dataForURLRequest:(id)a0 successWithResponse:(id /* block */)a1 error:(id /* block */)a2;
- (void)deleteAtURL:(id)a0 parameters:(id)a1 encoding:(unsigned long long)a2 success:(id /* block */)a3 error:(id /* block */)a4;
- (void)didLogInWithLoginUserInfo:(id)a0 completion:(id /* block */)a1;
- (void)didLogOutWithCompletion:(id /* block */)a0;
- (id)initForBundle:(id)a0;

@end
