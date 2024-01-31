@interface RWIProtocolConsoleDomainEventDispatcher : NSObject {
    struct AugmentableInspectorController { void /* function */ **x0; } *_controller;
}

- (id)initWithController:(struct AugmentableInspectorController { void /* function */ **x0; } *)a0;
- (void)heapSnapshotWithTimestamp:(double)a0 snapshotData:(id)a1 title:(id *)a2;
- (void)messageAddedWithMessage:(id)a0;
- (void)messageRepeatCountUpdatedWithCount:(int)a0 timestamp:(double *)a1;
- (void)messagesClearedWithReason:(long long)a0;

@end
