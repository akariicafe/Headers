@class NSString;

@interface ATXFakeAnchorModelPhase1Trainer : NSObject <ATXAnchorModelPhase1TrainerProtocol> {
    BOOL _phase1TrainerCalled;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)phase1TrainerCalled;
- (id)trainPhase1;

@end
