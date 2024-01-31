@interface HUTriggerActionFlow : NSObject

@property (readonly, nonatomic) BOOL hasChangedState;
@property (readonly, nonatomic) unsigned long long flowState;
@property (readonly, nonatomic) BOOL isLastState;
@property (readonly, nonatomic) BOOL isFinished;
@property (readonly, nonatomic) BOOL isStandalone;
@property (readonly, nonatomic) BOOL isSingleFlow;

+ (id)selectFlowForState:(unsigned long long)a0;

- (unsigned long long)_nextState;
- (id)getNextState;
- (id)initWithEditorMode:(unsigned long long)a0;
- (id)initWithFlowState:(unsigned long long)a0;
- (id)initWithFlowState:(unsigned long long)a0 hasChangedState:(BOOL)a1;

@end
