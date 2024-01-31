@class CHSChronoServicesConnection;

@interface CHSKeepAliveService : NSObject {
    CHSChronoServicesConnection *_connection;
}

- (id)init;
- (id)initWithConnection:(id)a0;
- (void).cxx_destruct;
- (id)acquireKeepAliveAssertionForExtensionBundleIdentifier:(id)a0 reason:(id)a1 error:(out id *)a2;

@end
