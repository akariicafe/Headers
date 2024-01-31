@class SBMainDisplayLayoutState;

@interface SBSceneLayoutStateProvider : NSObject

@property (retain, nonatomic) SBMainDisplayLayoutState *layoutState;
@property (retain, nonatomic) SBMainDisplayLayoutState *previousLayoutState;

- (id)initWithLayoutState:(id)a0;
- (void).cxx_destruct;

@end
