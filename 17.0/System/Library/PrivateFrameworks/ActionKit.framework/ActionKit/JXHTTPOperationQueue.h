@class NSString, NSMutableDictionary, NSMutableSet, NSDate, NSNumber, NSObject;
@protocol OS_dispatch_queue, JXHTTPOperationQueueDelegate;

@interface JXHTTPOperationQueue : NSOperationQueue

@property (retain) NSMutableDictionary *bytesDownloadedPerOperation;
@property (retain) NSMutableDictionary *bytesUploadedPerOperation;
@property (retain) NSMutableDictionary *expectedDownloadBytesPerOperation;
@property (retain) NSMutableDictionary *expectedUploadBytesPerOperation;
@property (retain) NSDate *startDate;
@property (retain) NSDate *finishDate;
@property (retain) NSString *uniqueString;
@property (retain) NSNumber *downloadProgress;
@property (retain) NSNumber *uploadProgress;
@property (retain) NSNumber *bytesDownloaded;
@property (retain) NSNumber *bytesUploaded;
@property (retain) NSNumber *expectedDownloadBytes;
@property (retain) NSNumber *expectedUploadBytes;
@property (retain) NSMutableSet *observedOperationSet;
@property (retain) NSObject<OS_dispatch_queue> *observationQueue;
@property (retain) NSObject<OS_dispatch_queue> *progressQueue;
@property (retain) NSObject<OS_dispatch_queue> *blockQueue;
@property (weak) NSObject<JXHTTPOperationQueueDelegate> *delegate;
@property (readonly) double elapsedSeconds;
@property BOOL performsBlocksOnMainQueue;
@property (copy) id /* block */ willStartBlock;
@property (copy) id /* block */ willFinishBlock;
@property (copy) id /* block */ didStartBlock;
@property (copy) id /* block */ didUploadBlock;
@property (copy) id /* block */ didDownloadBlock;
@property (copy) id /* block */ didMakeProgressBlock;
@property (copy) id /* block */ didFinishBlock;

+ (id)sharedQueue;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id /* block */)blockForSelector:(SEL)a0;
- (void)performDelegateMethod:(SEL)a0;

@end
