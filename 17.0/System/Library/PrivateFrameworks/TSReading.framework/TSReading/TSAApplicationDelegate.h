@interface TSAApplicationDelegate : TSABaseApplicationDelegate

@property (copy, nonatomic) id /* block */ alertCompletionBlock;
@property (getter=isInBackground) BOOL inBackground;
@property (getter=isActivating) BOOL activating;
@property (getter=isTerminating) BOOL terminating;
@property BOOL hasNotifiedEnterBackground;

+ (id)sharedDelegate;

- (id)init;
- (void)dealloc;
- (void)applicationDidReceiveMemoryWarning:(id)a0;
- (BOOL)centerOnInitialSelection;
- (id)image32IconForTXTFiles;
- (id)noDocumentsImagePath;
- (void)persistenceError:(id)a0;
- (id)previewImageNameForDocumentType:(id)a0;
- (id)previewImageNameForEncryptedNativeDocument;
- (id)previewImageNameForNativeDocument;
- (id)stringForImportingDocument;

@end
