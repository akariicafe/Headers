@interface AppAnalytics.UploadManager : _TtCs12_SwiftObject <AAFlushable> {
    void /* unknown type, empty encoding */ service;
    void /* unknown type, empty encoding */ dropbox;
    void /* unknown type, empty encoding */ config;
    void /* unknown type, empty encoding */ batchIdentifiers;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ flushQueue;
}

- (void)flushWithCallbackQueue:(id)a0 completion:(id /* block */)a1;

@end
