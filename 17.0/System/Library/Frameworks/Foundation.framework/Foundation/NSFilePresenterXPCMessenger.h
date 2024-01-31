@class NSString, NSFilePresenterProxy, NSObject;
@protocol OS_dispatch_queue, NSFilePresenter;

@interface NSFilePresenterXPCMessenger : NSObject <NSFilePresenterXPCInterface> {
    id<NSFilePresenter> _filePresenter;
    NSObject<OS_dispatch_queue> *_queue;
    NSFilePresenterProxy *_filePresenterProxy;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFilePresenterProxy:(id)a0;
- (void)dealloc;
- (void)_makePresenter:(id)a0 relinquishToWritingClaimWithID:(id)a1 options:(unsigned long long)a2 purposeID:(id)a3 subitemURL:(id)a4 completionHandler:(id /* block */)a5;
- (oneway void)observeVersionChangeOfKind:(id)a0 toItemAtURL:(id)a1 withClientID:(id)a2 name:(id)a3;
- (oneway void)logSuspensionWarning;
- (void)saveChangesWithCompletionHandler:(id /* block */)a0;
- (void)_makePresenter:(id)a0 observeUbiquityChangeWithSubitemURL:(id)a1;
- (void)_makePresenter:(id)a0 observeMoveToURL:(id)a1 withSubitemURL:(id)a2;
- (void)_makePresenter:(id)a0 observeVersionChangeOfKind:(id)a1 withClientID:(id)a2 name:(id)a3 subitemURL:(id)a4;
- (id)_writeRelinquishment;
- (oneway void)observeDisconnection;
- (void)_makePresenter:(id)a0 reportUnsavedChangesWithCompletionHandler:(id /* block */)a1;
- (oneway void)observeSharingChangeWithSubitemURL:(id)a0;
- (void)_makePresenter:(id)a0 accommodateEvictionWithSubitemURL:(id)a1 completionHandler:(id /* block */)a2;
- (oneway void)observePresenterChange:(BOOL)a0 forSubitemAtURL:(id)a1;
- (void)invalidate;
- (oneway void)observeUbiquityChangeWithSubitemURL:(id)a0;
- (void)accommodateDeletionOfSubitemAtURL:(id)a0 completionHandler:(id /* block */)a1;
- (oneway void)setProviderPurposeIdentifier:(id)a0;
- (void)_makePresenter:(id)a0 accommodateDisconnectionWithCompletionHandler:(id /* block */)a1;
- (void)_makePresenter:(id)a0 accommodateDeletionWithSubitemURL:(id)a1 completionHandler:(id /* block */)a2;
- (oneway void)observeMoveToURL:(id)a0 withSubitemURL:(id)a1 byWriterWithPurposeID:(id)a2 withFSID:(struct fsid { int x0[2]; })a3 andFileID:(unsigned long long)a4;
- (void)collectDebuggingInformationWithCompletionHandler:(id /* block */)a0;
- (id)initWithFilePresenter:(id)a0 queue:(id)a1;
- (void)_makePresenterObserveDisconnection:(id)a0;
- (oneway void)observeChangeOfUbiquityAttributes:(id)a0;
- (id)_readRelinquishment;
- (void)_makePresenter:(id)a0 saveChangesWithCompletionHandler:(id /* block */)a1;
- (oneway void)observeChangeWithSubitemURL:(id)a0;
- (void)_makePresenter:(id)a0 relinquishToReadingClaimWithID:(id)a1 purposeID:(id)a2 options:(unsigned long long)a3 completionHandler:(id /* block */)a4;
- (oneway void)reacquireFromReadingClaimForID:(id)a0;
- (void)reacquireFromWritingClaimForID:(id)a0 completionHandler:(id /* block */)a1;
- (void)relinquishToReadingClaimWithID:(id)a0 options:(unsigned long long)a1 purposeID:(id)a2 completionHandler:(id /* block */)a3;
- (oneway void)updateLastEventID:(unsigned long long)a0;
- (void)relinquishToWritingClaimWithID:(id)a0 options:(unsigned long long)a1 purposeID:(id)a2 subitemURL:(id)a3 completionHandler:(id /* block */)a4;
- (void)_makePresenter:(id)a0 observeChangeOfUbiquityAttributes:(id)a1;
- (void)_makePresenter:(id)a0 setProviderPurposeIdentifier:(id)a1;
- (void)_makePresenter:(id)a0 validateRelinquishmentToSubitemAtURL:(id)a1 completionHandler:(id /* block */)a2;
- (void)_makePresenter:(id)a0 relinquishToAccessClaimWithID:(id)a1 purposeID:(id)a2 ifNecessaryUsingSelector:(SEL)a3 recordingRelinquishment:(id)a4 continuer:(id /* block */)a5;
- (void)_makePresenter:(id)a0 validateRemoteDeletionRecordingRelinquishment:(id)a1 completionHandler:(id /* block */)a2;
- (void)_makePresenter:(id)a0 observeChangeWithSubitemURL:(id)a1;
- (void)_makePresenter:(id)a0 setLastPresentedItemEventIdentifier:(unsigned long long)a1;
- (oneway void)observeReconnection;
- (void)_makePresenterObserveReconnection:(id)a0;
- (void)_makePresenter:(id)a0 observeSharingChangeWithSubitemURL:(id)a1;

@end
