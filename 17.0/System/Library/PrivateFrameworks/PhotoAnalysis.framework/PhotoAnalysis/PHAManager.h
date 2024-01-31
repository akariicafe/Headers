@class PGManager, NSURL, NSString, NSMutableDictionary, PHPhotoLibrary, PHAMonitoring, PHAExecutive, PHAJobCoordinator, CPAnalytics;

@interface PHAManager : NSObject <PHAServiceOperationHandling> {
    PHAMonitoring *_monitoring;
}

@property (retain) NSMutableDictionary *photoAnalysisWorkersByType;
@property (readonly) PHAExecutive *executive;
@property (readonly) NSURL *libraryURL;
@property (readonly) PHPhotoLibrary *photoLibrary;
@property (readonly) PGManager *graphManager;
@property (readonly) PHAJobCoordinator *jobCoordinator;
@property (readonly, getter=isQuiescent) BOOL quiescent;
@property (readonly) CPAnalytics *analytics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allWorkerClasses;
+ (void)enumerateWorkerClassesUsingBlock:(id /* block */)a0;

- (BOOL)isReadyForAnalysis;
- (id)statusAsDictionary;
- (void)stopBackgroundActivity;
- (void)shutdown;
- (id)init;
- (id)clientDispatcher;
- (void)handleOperation:(id)a0;
- (BOOL)isBacklogged;
- (id)initWithPhotoLibraryURL:(id)a0 executive:(id)a1;
- (void)stopBackgroundActivityWaitForCompletion;
- (void)enumerateWorkersUsingBlock:(id /* block */)a0;
- (id)storytellingWorker;
- (void)backgroundActivityDidBegin;
- (void)dumpAnalysisStatusWithContext:(id)a0 reply:(id /* block */)a1;
- (void)requestEnergyStatusWithContext:(id)a0 reply:(id /* block */)a1;
- (void).cxx_destruct;
- (BOOL)validateOperation:(id)a0 forConnection:(id)a1;
- (id)monitoring;
- (BOOL)photosIsConnected;
- (void)triggerBackgroundActivity;
- (void)stopAllBackgroundActivities;
- (id)backloggedStatus;
- (void)checkForQuiescence;

@end
