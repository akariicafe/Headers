@class CHSChronoServicesConnection;

@interface CHSInteractionEventService : NSObject {
    CHSChronoServicesConnection *_connection;
}

- (id)init;
- (id)initWithConnection:(id)a0;
- (void).cxx_destruct;
- (void)userEnteredAddGalleryForHost:(id)a0;
- (void)applicationEnteredForegroundWithBundleID:(id)a0;

@end
