@class NSString, UIView, _UILegibilitySettings;

@interface PBUISimpleReplicaPortalSource : NSObject <PBUIReplicaPortalSource>

@property (copy, nonatomic) NSString *cacheIdentifier;
@property (copy, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) BOOL effectsAreBakedIn;
@property (retain, nonatomic) UIView *targetView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithTargetView:(id)a0 cacheIdentifier:(id)a1 legibilitySettings:(id)a2 effectsAreBakedIn:(BOOL)a3;

@end
