@class NSString, BRCServerZone;

@interface BRCSyncDownOperation : _BRCOperation <BRCOperationSubclass> {
    BRCServerZone *_serverZone;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldRetryForError:(id)a0;
- (void)main;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (id)createActivity;
- (void)_fetchInitialZoneIfNecessaryWithCreatedZone:(id)a0;
- (void)_performAfterFetchingRecordChanges:(id /* block */)a0;
- (void)_saveInitialServerZoneData:(id)a0 clientChangeTokenData:(id)a1;
- (void)_startCreateZoneAndSubscriptionAndSyncDown;
- (void)_startSyncDown;
- (BOOL)handleZoneNotFoundIfSyncingDownForTheFirstTime:(id)a0;
- (id)initDeltaSyncWithServerZone:(id)a0;

@end
