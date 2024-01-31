@class AVAudioFormat, NSObject;
@protocol OS_dispatch_queue, OS_os_transaction;

@interface SNAudioRecordingQueueScheduler : NSObject {
    NSObject<OS_dispatch_queue> *_eventHandlerQueue;
    _Atomic long long _eventHandlerQueueFundsSpent;
    _Atomic long long _eventHandlerQueueFundsEarned;
    _Atomic BOOL _eventHandlerQueueStopped;
    id /* block */ _bufferHandler;
    id /* block */ _interruptionHandler;
    NSObject<OS_os_transaction> *_transaction;
    AVAudioFormat *_recordFormat;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastAudioHeartbeatTime;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastProcessingHeartbeatTime;
    int _unhealthyBufferCount;
}

- (id)init;
- (void).cxx_destruct;

@end
