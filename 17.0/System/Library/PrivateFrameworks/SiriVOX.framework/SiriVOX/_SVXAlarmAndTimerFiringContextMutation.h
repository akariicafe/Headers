@class NSString, SVXAlarmAndTimerFiringContext, NSOrderedSet;

@interface _SVXAlarmAndTimerFiringContextMutation : NSObject <SVXAlarmAndTimerFiringContextMutating> {
    SVXAlarmAndTimerFiringContext *_baseModel;
    NSOrderedSet *_orderedFiringAlarms;
    NSOrderedSet *_orderedFiringTimers;
    BOOL _hasOtherRunningTimers;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasOrderedFiringAlarms : 1; unsigned char hasOrderedFiringTimers : 1; unsigned char hasHasOtherRunningTimers : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)generate;
- (void).cxx_destruct;
- (id)initWithBaseModel:(id)a0;
- (void)setHasOtherRunningTimers:(BOOL)a0;
- (void)setOrderedFiringAlarms:(id)a0;
- (void)setOrderedFiringTimers:(id)a0;

@end
