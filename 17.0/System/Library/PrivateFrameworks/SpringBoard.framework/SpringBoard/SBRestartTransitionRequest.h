@class NSString, NSURL, BKSDisplayRenderOverlayDescriptor;

@interface SBRestartTransitionRequest : NSObject <BSDescriptionProviding, NSCopying>

@property (copy, nonatomic) NSString *requester;
@property (copy, nonatomic) NSString *reason;
@property (nonatomic) int restartType;
@property (nonatomic) double delay;
@property (nonatomic) BOOL wantsPersistentSnapshot;
@property (copy, nonatomic) BKSDisplayRenderOverlayDescriptor *customOverlayDescriptor;
@property (copy, nonatomic) NSURL *applicationLaunchURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRequester:(id)a0 reason:(id)a1;

@end
