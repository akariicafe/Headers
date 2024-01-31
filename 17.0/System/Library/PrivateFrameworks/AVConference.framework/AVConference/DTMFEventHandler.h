@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface DTMFEventHandler : NSObject {
    NSMutableArray *dtmfEventQueue;
    NSObject<OS_dispatch_queue> *dtmfQueue;
    int _currentEventState;
    BOOL currentEventNeedsEndBlock;
    unsigned long long currentEventRetransmitFinalPacketCount;
    unsigned char currentEvent;
    unsigned char currentVolume;
    unsigned int currentStartTimestamp;
    unsigned int currentDurationCounter;
    unsigned int currentEndTimestamp;
    unsigned int _currentPauseCompleteTimestamp;
    unsigned int _rtpEventDuration;
    unsigned int _adjustTimestamp;
}

- (id)init;
- (void)dealloc;
- (int)constructDTMFEventPacketWithEvent:(unsigned char)a0 volume:(unsigned char)a1 durationCounter:(unsigned int)a2 dataBuffer:(char *)a3 isEnd:(BOOL)a4;
- (BOOL)insertStartBlockWithEvent:(unsigned char)a0 volume:(unsigned char)a1 timestamp:(unsigned int)a2;
- (BOOL)insertStopBlockWithEndTimestamp:(unsigned int)a0 withPauseCompleteTimestamp:(unsigned int)a1;
- (void)sendDTMFEvent:(id)a0 atTimestamp:(unsigned int)a1 withSampleRate:(unsigned int)a2;
- (void)sendingDTMFEventWithTimeStamp:(unsigned int)a0 interval:(unsigned int)a1 RTPHandle:(struct tagHANDLE { int x0; } *)a2;
- (void)setDTMFRTPEventDurationForPayload:(int)a0;
- (BOOL)shouldAdjustForLastPauseCompleteTimestamp:(unsigned int *)a0;
- (BOOL)shouldTransmitDTMFWithTimestamp:(unsigned int)a0;
- (void)stopDTMFEventAtTimestamp:(unsigned int)a0 withSampleRate:(unsigned int)a1;

@end
