@class NSString, TKTokenConfigurationConnection;

@interface TKTokenConfigurationConnectionProxy : NSObject <TKTokenConfigurationChangeProtocol> {
    TKTokenConfigurationConnection *_weakConfigurationConnection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithConnection:(id)a0;
- (void).cxx_destruct;
- (void)tokenConfigurationChanged:(id)a0;

@end
