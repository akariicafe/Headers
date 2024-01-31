@class CKDZoneGatekeeperImplementation;

@interface CKDZoneGatekeeper : NSObject

@property (retain, nonatomic) CKDZoneGatekeeperImplementation *foreground;
@property (retain, nonatomic) CKDZoneGatekeeperImplementation *background;

+ (id)gatekeeperForContainerID:(id)a0 accountID:(id)a1;

- (id)CKStatusReportArray;
- (id)initInternal;
- (void)relinquishLocksForWaiter:(id)a0 deferRelinquish:(BOOL)a1;
- (BOOL)hasStatusToReport;
- (void).cxx_destruct;
- (void)registerWaiter:(id)a0 forZoneIDs:(id)a1 expectDelayBeforeRequestBegins:(BOOL)a2 completionHandler:(id /* block */)a3;

@end
