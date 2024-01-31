@interface SiriAnalyticsPreprocessor : NSObject {
    void /* unknown type, empty encoding */ metastore;
    void /* unknown type, empty encoding */ fbf;
    void /* unknown type, empty encoding */ telemetry;
    void /* unknown type, empty encoding */ metastoreQueue;
    void /* unknown type, empty encoding */ messageTailing;
    void /* unknown type, empty encoding */ messageStaging;
    void /* unknown type, empty encoding */ localStorage;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithMetastore:(id)a0 metastoreQueue:(id)a1 fbf:(id)a2 telemetry:(id)a3 messageTailing:(id)a4 messageStaging:(id)a5 localStorage:(id)a6;
- (void)processWithReason:(long long)a0 completion:(id /* block */)a1;

@end
