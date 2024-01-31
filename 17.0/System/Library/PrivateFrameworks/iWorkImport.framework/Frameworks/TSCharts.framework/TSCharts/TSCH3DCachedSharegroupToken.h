@class TSCH3DSharegroupDelayChecker, TSCH3DGPUSharegroup;

@interface TSCH3DCachedSharegroupToken : TSCH3DSharegroupToken <TSCH3DSharegroupDelayCheckerParent> {
    TSCH3DSharegroupDelayChecker *_checker;
    TSCH3DGPUSharegroup *_sharegroup;
}

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)tokenSharegroup;
- (void)deleteTokenSharegroup;
- (void)didRemoveAllInterests;
- (void)flushTokenSharegroup;
- (void)releaseSharegroup:(id)a0;
- (void)willCheckCondition;

@end
