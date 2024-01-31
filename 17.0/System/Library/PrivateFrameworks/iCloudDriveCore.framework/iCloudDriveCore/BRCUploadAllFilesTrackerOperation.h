@class NSString, BRCAccountSessionFPFS, NSMutableDictionary, NSMutableArray;

@interface BRCUploadAllFilesTrackerOperation : _BRCFrameworkOperation <BRCAllItemsDidUploadTracker, BRCOperationSubclass> {
    BRCAccountSessionFPFS *_session;
    NSMutableArray *_zonesStillUploading;
    NSMutableArray *_hiddenZoneWithError;
    NSMutableDictionary *_perContainerIDError;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldRetryForError:(id)a0;
- (void)main;
- (void).cxx_destruct;
- (void)cancel;
- (void)clientZone:(id)a0 didFinishUploadingAllItemsWithError:(id)a1;
- (id)initWithSession:(id)a0 appLibraries:(id)a1;

@end
