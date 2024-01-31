@class NSUUID, NSString;
@protocol SBSAInterfaceElementPropertyIdentifying;

@interface SBSAAnimatedTransitionResultDescription : NSObject <SBSAAnimatedTransitionResultDescribing, SBSABlockMutating>

@property (class, readonly, nonatomic) Class mutatorClass;

@property (copy, nonatomic, setter=_setAnimatedTransitionIdentifier:) NSUUID *animatedTransitionIdentifier;
@property (copy, nonatomic, setter=_setAssociatedInterfaceElementPropertyIdentityIdentity:) id<SBSAInterfaceElementPropertyIdentifying> associatedInterfaceElementPropertyIdentity;
@property (nonatomic, setter=_setTargetedMilestone:) double targetedMilestone;
@property (nonatomic, getter=isTransitionEndTargeted, setter=_setTransitionEndTargeted:) BOOL transitionEndTargeted;
@property (nonatomic, setter=_setFinished:) BOOL finished;
@property (nonatomic, setter=_setRetargeted:) BOOL retargeted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)instanceWithBlock:(id /* block */)a0;

- (id)copyWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAnimatedTransitionResultDescription:(id)a0;

@end
