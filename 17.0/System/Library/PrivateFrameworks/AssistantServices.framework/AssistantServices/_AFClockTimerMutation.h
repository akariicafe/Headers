@class NSString, AFClockTimer, NSUUID, NSURL, NSDate;

@interface _AFClockTimerMutation : NSObject <AFClockTimerMutating> {
    AFClockTimer *_base;
    NSUUID *_timerID;
    NSURL *_timerURL;
    BOOL _isFiring;
    NSString *_title;
    long long _state;
    double _duration;
    long long _type;
    double _fireTimeInterval;
    NSDate *_fireDate;
    NSDate *_firedDate;
    NSDate *_dismissedDate;
    NSDate *_lastModifiedDate;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasTimerID : 1; unsigned char hasTimerURL : 1; unsigned char hasIsFiring : 1; unsigned char hasTitle : 1; unsigned char hasState : 1; unsigned char hasDuration : 1; unsigned char hasType : 1; unsigned char hasFireTimeInterval : 1; unsigned char hasFireDate : 1; unsigned char hasFiredDate : 1; unsigned char hasDismissedDate : 1; unsigned char hasLastModifiedDate : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setType:(long long)a0;
- (void)setTimerID:(id)a0;
- (id)initWithBase:(id)a0;
- (void)setDismissedDate:(id)a0;
- (void)setFireTimeInterval:(double)a0;
- (long long)getType;
- (BOOL)isDirty;
- (BOOL)getIsFiring;
- (long long)getState;
- (void)setLastModifiedDate:(id)a0;
- (id)getTitle;
- (void)setTimerURL:(id)a0;
- (void)setFireDate:(id)a0;
- (void)setState:(long long)a0;
- (void).cxx_destruct;
- (id)getTimerID;
- (void)setFiredDate:(id)a0;
- (id)getLastModifiedDate;
- (id)getTimerURL;
- (void)setIsFiring:(BOOL)a0;
- (double)getDuration;
- (id)getDismissedDate;
- (id)getFireDate;
- (void)setTitle:(id)a0;
- (double)getFireTimeInterval;
- (id)getFiredDate;
- (void)setDuration:(double)a0;

@end
