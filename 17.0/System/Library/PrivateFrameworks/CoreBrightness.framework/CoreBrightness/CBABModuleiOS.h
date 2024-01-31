@class CBDisplayModuleiOS, NSString, CBALSTelemetry, CBGrimaldiModule, AABRear, NSMutableArray;

@interface CBABModuleiOS : CBModule <CBHIDServiceProtocol, CBContainerModuleProtocol, CBStatusInfoProtocol, CBAODProtocol> {
    void *_AABC;
    CBDisplayModuleiOS *_display;
    AABRear *_AABRear;
    CBGrimaldiModule *_Grimaldi;
    NSMutableArray *_alsServiceClients;
    NSMutableArray *_otherServiceClients;
    CBALSTelemetry *_alsTelemetry;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)handleHIDEvent:(struct __IOHIDEvent { } *)a0 from:(struct __IOHIDServiceClient { } *)a1;
- (BOOL)addHIDServiceClient:(struct __IOHIDServiceClient { } *)a0;
- (id)copyIdentifiers;
- (void)sendNotificationForKey:(id)a0 withValue:(id)a1;
- (id)copyPropertyForKey:(id)a0;
- (void)dealloc;
- (BOOL)handleAODStateUpdate:(unsigned long long)a0 transitionTime:(float)a1 context:(id)a2;
- (void)start;
- (BOOL)shouldMitigateHarmony:(struct __IOHIDServiceClient { } *)a0;
- (void)stop;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (id)copyPropertyInternalForKey:(id)a0;
- (id)copyPropertyForKey:(id)a0 withParameter:(id)a1;
- (id)initWithDisplayModule:(id)a0 andQueue:(id)a1;
- (BOOL)removeHIDServiceClient:(struct __IOHIDServiceClient { } *)a0;
- (void)handleNotificationForKey:(id)a0 withProperty:(id)a1;

@end
