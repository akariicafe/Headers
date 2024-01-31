@class SBSAAnimatedTransitionResultDescription, NSUUID;
@protocol SBSAInterfaceElementPropertyIdentifying;

@interface SBSAAnimatedTransitionResultDescriptionMutator : NSObject

@property (readonly, nonatomic) SBSAAnimatedTransitionResultDescription *animatedTransitionResultDescription;
@property (copy, nonatomic) NSUUID *animatedTransitionIdentifier;
@property (copy, nonatomic) id<SBSAInterfaceElementPropertyIdentifying> associatedInterfaceElementPropertyIdentity;
@property (nonatomic) double targetedMilestone;
@property (nonatomic, getter=isTransitionEndTargeted) BOOL transitionEndTargeted;
@property (nonatomic) BOOL finished;
@property (nonatomic) BOOL retargeted;

- (id)description;
- (void).cxx_destruct;
- (id)initWithAnimatedTransitionResultDescription:(id)a0;

@end
