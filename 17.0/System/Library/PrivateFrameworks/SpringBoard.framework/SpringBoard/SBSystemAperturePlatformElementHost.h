@class NSString, NSMapTable;
@protocol SBSystemApertureDynamicsHandling, SBSystemApertureElement, SAInvalidatable, SBSystemAperturePlatformElementHostingDelegate;

@interface SBSystemAperturePlatformElementHost : NSObject <SBSystemAperturePlatformElementHosting> {
    NSMapTable *_reasonsToUrgencyAssertions;
    id<SBSystemApertureElement> _element;
    id<SBSystemApertureDynamicsHandling, SBSystemAperturePlatformElementHostingDelegate> _delegate;
}

@property (readonly, weak, nonatomic) id<SAInvalidatable> urgentAndImportantAssertion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_urgencyAssertionWithReason:(id)a0 creatingIfNecessary:(BOOL)a1;
- (void)elementRequestsDiscreteAnimationOfType:(long long)a0;
- (id)elementRequestsPersistentAnimationOfType:(long long)a0;
- (id)initWithElement:(id)a0 delegate:(id)a1;
- (id)requestUrgentAndImportantPriorityWithReason:(id)a0;

@end
