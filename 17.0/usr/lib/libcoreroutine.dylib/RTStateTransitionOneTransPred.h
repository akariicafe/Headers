@class NSUUID, RTStateTransitionOnePredEl;

@interface RTStateTransitionOneTransPred : NSObject

@property (retain, nonatomic) RTStateTransitionOnePredEl *weekly;
@property (retain, nonatomic) RTStateTransitionOnePredEl *daily;
@property (retain, nonatomic) NSUUID *stateUUID;

- (id)init;
- (void).cxx_destruct;

@end
