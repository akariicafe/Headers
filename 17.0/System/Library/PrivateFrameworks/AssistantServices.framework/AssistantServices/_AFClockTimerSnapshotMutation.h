@class NSString, NSDictionary, NSOrderedSet, NSDate, AFClockTimerSnapshot;

@interface _AFClockTimerSnapshotMutation : NSObject <AFClockTimerSnapshotMutating> {
    AFClockTimerSnapshot *_base;
    unsigned long long _generation;
    NSDate *_date;
    NSDictionary *_timersByID;
    NSOrderedSet *_notifiedFiringTimerIDs;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasGeneration : 1; unsigned char hasDate : 1; unsigned char hasTimersByID : 1; unsigned char hasNotifiedFiringTimerIDs : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setGeneration:(unsigned long long)a0;
- (id)initWithBase:(id)a0;
- (id)getNotifiedFiringTimerIDs;
- (BOOL)isDirty;
- (void)setDate:(id)a0;
- (void)setTimersByID:(id)a0;
- (void).cxx_destruct;
- (id)getTimersByID;
- (void)setNotifiedFiringTimerIDs:(id)a0;
- (id)getDate;
- (unsigned long long)getGeneration;

@end
