@class NSString, NSDictionary, NSOrderedSet, NSDate, SOAlarmsSnapshot;

@interface _SOAlarmsSnapshotMutation : NSObject <SOAlarmsSnapshotMutating> {
    SOAlarmsSnapshot *_base;
    NSDate *_date;
    NSDictionary *_alarmsByID;
    NSOrderedSet *_firingAlarmIDs;
    NSOrderedSet *_dismissedAlarmIDs;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasDate : 1; unsigned char hasAlarmsByID : 1; unsigned char hasFiringAlarmIDs : 1; unsigned char hasDismissedAlarmIDs : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBase:(id)a0;
- (BOOL)isDirty;
- (void)setDate:(id)a0;
- (void).cxx_destruct;
- (void)setAlarmsByID:(id)a0;
- (id)getDate;
- (id)getAlarmsByID;
- (id)getDismissedAlarmIDs;
- (id)getFiringAlarmIDs;
- (void)setDismissedAlarmIDs:(id)a0;
- (void)setFiringAlarmIDs:(id)a0;

@end
