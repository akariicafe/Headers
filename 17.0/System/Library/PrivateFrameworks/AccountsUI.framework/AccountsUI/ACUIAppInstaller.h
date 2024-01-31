@class NSURL, NSDate, ACUIAppDescription;
@protocol ACUIAppInstallerDelegate;

@interface ACUIAppInstaller : NSObject {
    ACUIAppDescription *_app;
    NSDate *_dateOfLastReachabilityCheck;
    BOOL _cachedReachabilityResult;
    NSDate *_dateOfLastInstallationCheck;
    BOOL _resultOfLastInstallationCheck;
    BOOL _needsAvailableInStoreCheck;
    BOOL _availableInStoreResult;
}

@property (readonly, nonatomic) BOOL isInstalled;
@property (retain, nonatomic) NSURL *publisherURL;
@property (readonly, nonatomic) BOOL isDownloadable;
@property (readonly, nonatomic) BOOL requiresReachabilityCheckToDetermineDownloadability;
@property (readonly, nonatomic) BOOL isAvailableInStore;
@property (weak, nonatomic) id<ACUIAppInstallerDelegate> delegate;

+ (id)currentStoreFront;

- (void)start;
- (void).cxx_destruct;
- (BOOL)_isGreenTeaAvailable;
- (void)_performAvailabilityCheck:(id /* block */)a0;
- (void)_performReachabilityCheck:(id /* block */)a0;
- (BOOL)_quicklyGenerateCachedReachabilityResultConsideringPublisherURL:(BOOL)a0;
- (void)_setAvailableInStoreResult:(BOOL)a0;
- (void)_setCachedReachabilityResult:(BOOL)a0;
- (void)checkAvailabilityInStore:(id /* block */)a0;
- (void)fetchDownloadability:(id /* block */)a0;
- (id)initForAppWithDescription:(id)a0;

@end
