@class TSUSandboxedURL, NSString, NSData, NSURL, TSUURLTrackerFilePresenter;
@protocol TSULogContext;

@interface TSUURLTracker : NSObject <TSUURLWrapper> {
    TSUURLTrackerFilePresenter *_filePresenter;
}

@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) BOOL isFilePresenter;
@property (readonly) TSUSandboxedURL *sandboxedURL;
@property (readonly) TSUSandboxedURL *sandboxedURLIfAvailable;
@property (readonly) NSData *bookmarkData;
@property (readonly) NSData *bookmarkDataIfAvailable;
@property (readonly) BOOL deleted;
@property (readonly) BOOL isLikelyOnExternalStorage;
@property (readonly) BOOL isLikelyOnRemovedMedia;
@property (readonly) BOOL isVolumeKnownToBeEjectable;
@property (readonly) BOOL isVolumeKnownToBeRemovable;
@property (readonly) BOOL isVolumeKnownToBeLocal;
@property (readonly) NSURL *volumeURL;
@property (readonly, nonatomic) id<TSULogContext> logContext;
@property (readonly) NSURL *URL;
@property (readonly) NSURL *URLIfAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pause;
- (id)init;
- (void)dealloc;
- (void)stop;
- (void)resume;
- (void).cxx_destruct;
- (id)initWithBookmarkData:(id)a0;
- (id)initWithURLWrapper:(id)a0;
- (id)initWithBookmarkData:(id)a0 delegate:(id)a1;
- (id)bookmarkDataWithOptions:(unsigned long long)a0 error:(id *)a1;
- (id)initWithSandboxedURL:(id)a0 bookmarkData:(id)a1 delegate:(id)a2;
- (id)initWithURLWrapper:(id)a0 delegate:(id)a1;
- (id)p_filePresenterQueue;
- (id)sandboxedURLWithOptions:(unsigned long long)a0 error:(id *)a1;

@end
