@interface NewsPersonalization.XavierEventProcessor : NSObject <FCNewsAppConfigurationObserving> {
    void /* unknown type, empty encoding */ personalizer;
    void /* unknown type, empty encoding */ actionTranslators;
    void /* unknown type, empty encoding */ jsonDecoder;
    void /* unknown type, empty encoding */ sessionTracker;
    void /* unknown type, empty encoding */ _configuration;
}

- (void)configurationManager:(id)a0 appConfigurationDidChange:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
