@class FPItemID, NSProgress, NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface BRFPItemProgressObserver : NSObject {
    BOOL _started;
    NSObject<OS_dispatch_queue> *_queue;
    NSProgress *_downloadProgress;
    NSProgress *_uploadProgress;
}

@property (readonly, nonatomic) NSNumber *uploadPercentCompleted;
@property (readonly, nonatomic) NSNumber *downloadPercentCompleted;
@property (readonly, nonatomic) FPItemID *fpItemID;
@property (copy, nonatomic) id /* block */ progressHandler;

- (void)start;
- (void)stop;
- (id)description;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)_startObservingProgress:(id)a0;
- (id)initWithFPItem:(id)a0 queue:(id)a1;
- (void)updateWithFPItem:(id)a0;

@end
