@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface LightweightTimer : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
    id /* block */ _callback;
    double _slotScaleFactor;
    unsigned long long _timerExpiryTargetSlot;
    unsigned long long _numSlots;
    unsigned int _seqno;
    unsigned long long _nsecsPerSlot;
    unsigned long long _activeSlotBitmask;
    NSMutableArray *_entries[64];
}

- (void)dealloc;
- (unsigned long long)setRelativeTimer:(double)a0 context:(id)a1;
- (void)_handleTimerExpiry;
- (id)description;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0 maxDelay:(double)a1 precision:(double)a2 callback:(id /* block */)a3;
- (BOOL)cancel:(unsigned long long)a0;

@end
