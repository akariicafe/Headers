@class NSTimer, NSUUID, NSString, NSArray, NTKPersistentFaceCollection, NTKGreenfieldB640Model, NSError, ProductKitCatalog, NSObject, NSBundle, NTKGreenfieldDecodedRecipe, NTKFace;
@protocol NTKGreenfieldB640WatchFacesManagerDelegate, OS_dispatch_queue;

@interface NTKGreenfieldB640Manager : NSObject <NTKFaceCollectionObserver> {
    NSString *_sourceApplicationBundleIdentifier;
    NSString *_scannedCodeIdentifier;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSArray *_watchFacesModels;
    NTKGreenfieldB640Model *_greenfieldB640Model;
    NSArray *_watchFacesDecodeErrors;
    NTKPersistentFaceCollection *_library;
    NSTimer *_libraryTimeoutTimer;
    unsigned long long _state;
    NSError *_error;
    NTKFace *_watchFaceAddedToLibrary;
    NSString *_bandImagePath;
    NSBundle *_bandImageBundle;
    unsigned long long _libraryState;
    NTKGreenfieldDecodedRecipe *_selectedRecipe;
    ProductKitCatalog *_productKitCatalog;
}

@property (readonly, nonatomic) NSUUID *addedFaceID;
@property (weak, nonatomic) id<NTKGreenfieldB640WatchFacesManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)faceCollectionDidLoad:(id)a0;
- (void).cxx_destruct;
- (void)handleDidExitGreenfieldB640Flow;
- (id)_analyticsExitScreenNameForCurrentState;
- (id)_analyticsModelForAddFaceEventsForWatchFace:(id)a0;
- (void)_cancelLibraryTimeoutTimer;
- (void)_decodeWatchFacesUrls:(id)a0;
- (void)_handleB640WatchFaceManagerDidFinishWithError:(id)a0 watchFaceModels:(id)a1;
- (void)_handleProductKitUrl:(id)a0;
- (void)_libraryTimeoutTimerFired;
- (void)_moveToDecodeStateCompletedIfPossible;
- (void)_setLibraryState:(unsigned long long)a0;
- (void)_startLibraryTimeoutTimer;
- (void)_updateComplicationForDecodedRecipe:(id)a0 installedItemIds:(id)a1 installedBundleIds:(id)a2;
- (unsigned long long)bandVariantForPairedDevice;
- (void)decodeUrl:(id)a0 sourceApplicationBundleIdentifier:(id)a1;
- (void)handleAddToMyFacesAction;
- (void)handleWatchFaceSelectedActionWithSelectedIndex:(long long)a0;

@end
