@interface IISMetricStore : NSObject {
    void /* unknown type, empty encoding */ storageLock;
    void /* unknown type, empty encoding */ windowStartDate;
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ enrichmentProviders;
    void /* unknown type, empty encoding */ messageListeners;
    void /* unknown type, empty encoding */ sendInterval;
}

@property (class, nonatomic, readonly) IISMetricStore *sharedInstance;

- (id)init;
- (void)registerMessageListener:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)sendMessagesWithShouldContinue:(id /* block */)a0;
- (void)registerEnrichmentProvider:(id)a0;
- (void)removeAllMetricsWithPrefix:(id)a0;
- (id)saveMessage:(id)a0 backend:(unsigned char)a1 messageIdentifier:(id)a2;
- (BOOL)shouldSendMessages;

@end
