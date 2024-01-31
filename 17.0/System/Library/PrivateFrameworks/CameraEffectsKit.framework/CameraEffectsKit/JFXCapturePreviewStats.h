@class NSString, JFXCapturePreviewFrameStats, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface JFXCapturePreviewStats : NSObject {
    JFXCapturePreviewFrameStats *_runningAverage;
    NSMutableArray *_stats;
    NSObject<OS_dispatch_queue> *_q;
}

@property (retain, nonatomic) NSString *name;

- (void)clear;
- (id)init;
- (void)print;
- (void).cxx_destruct;
- (id)add:(id)a0;
- (void)_print_NoLock;
- (void)printSync;
- (id)runningAverage;

@end
