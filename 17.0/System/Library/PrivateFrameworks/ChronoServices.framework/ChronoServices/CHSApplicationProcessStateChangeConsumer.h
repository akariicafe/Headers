@class CHSChronoServicesConnection;

@interface CHSApplicationProcessStateChangeConsumer : NSObject {
    CHSChronoServicesConnection *_connection;
}

- (id)init;
- (id)initWithConnection:(id)a0;
- (void).cxx_destruct;
- (void)applicationWithBundleIdentifierEnteredForeground:(id)a0;

@end
