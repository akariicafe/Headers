@class NSString, AFSystemStateSnapshot;

@interface _AFSystemStateSnapshotMutation : NSObject <AFSystemStateSnapshotMutating> {
    AFSystemStateSnapshot *_base;
    long long _sleepState;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasSleepState : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBase:(id)a0;
- (BOOL)isDirty;
- (void).cxx_destruct;
- (long long)getSleepState;
- (void)setSleepState:(long long)a0;

@end
