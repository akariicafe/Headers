@class TKTokenConfigurationConnection;

@interface TKTokenConfigurationTransaction : NSObject {
    TKTokenConfigurationConnection *_configurationConnection;
}

- (void)dealloc;
- (void)commit;
- (void).cxx_destruct;
- (id)initWithConfigurationConnection:(id)a0;

@end
