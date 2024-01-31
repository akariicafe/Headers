@class CHSChronoServicesConnection, NSString;

@interface CHSAppIntentsXPCListenerEndpointProvider : NSObject {
    CHSChronoServicesConnection *_connection;
    NSString *_bundleIdentifier;
}

- (void)getAppIntentsXPCListenerEndpointWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)a0;

@end
