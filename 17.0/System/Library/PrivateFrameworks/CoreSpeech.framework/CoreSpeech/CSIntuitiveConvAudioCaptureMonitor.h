@class NSHashTable, CSAudioStartStreamOption, NSObject;
@protocol OS_dispatch_queue;

@interface CSIntuitiveConvAudioCaptureMonitor : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) CSAudioStartStreamOption *startStreamOption;

+ (id)sharedInstance;

- (id)init;
- (void)registerObserver:(id)a0;
- (void)unregisterObserver:(id)a0;
- (void).cxx_destruct;
- (void)notifyDidStartAudioCaptureSuccessfully:(BOOL)a0 eventUUID:(id)a1;
- (void)notifyDidStopAudioCaptureWithOption:(id)a0 eventUUID:(id)a1 error:(id)a2;
- (void)notifyFetchedAudioStream:(id)a0 successfully:(BOOL)a1;
- (void)notifyWillStartAudioCaptureWithContext:(id)a0 option:(id)a1;
- (void)notifyWillStopAudioCaptureWithReason:(unsigned long long)a0;

@end
