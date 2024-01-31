@class SBSwitcherModifierEventSnapshot, SBSwitcherModifierStackSnapshot, SBSwitcherModifierEventResponseSnapshot;

@interface SBSwitcherModifierTimelineEntry : NSObject

@property (readonly, nonatomic) SBSwitcherModifierEventSnapshot *eventSnapshot;
@property (readonly, nonatomic) SBSwitcherModifierStackSnapshot *stackSnapshotAfterEvent;
@property (readonly, nonatomic) SBSwitcherModifierEventResponseSnapshot *responseSnapshot;

- (void).cxx_destruct;
- (id)initWithEventSnapshot:(id)a0 responseSnapshot:(id)a1 stackSnapshotAfterEvent:(id)a2;

@end
