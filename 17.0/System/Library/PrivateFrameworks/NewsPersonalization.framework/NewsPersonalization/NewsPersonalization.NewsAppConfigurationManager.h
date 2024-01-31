@interface NewsPersonalization.NewsAppConfigurationManager : NSObject <FCNewsAppConfigurationObserving> {
    void /* unknown type, empty encoding */ appConfigurationManager;
    void /* unknown type, empty encoding */ transform;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ onChangeBlocks;
}

- (void)configurationManager:(id)a0 appConfigurationDidChange:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
