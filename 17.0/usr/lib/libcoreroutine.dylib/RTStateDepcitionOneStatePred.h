@class NSUUID, RTStateDepictionOnePredEl;

@interface RTStateDepcitionOneStatePred : NSObject

@property (retain, nonatomic) RTStateDepictionOnePredEl *weekly;
@property (retain, nonatomic) RTStateDepictionOnePredEl *daily;
@property (retain, nonatomic) NSUUID *stateUUID;

- (id)init;
- (void).cxx_destruct;

@end
