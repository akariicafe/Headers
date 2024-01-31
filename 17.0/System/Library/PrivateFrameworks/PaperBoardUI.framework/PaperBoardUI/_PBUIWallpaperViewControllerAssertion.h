@class PBUIWallpaperViewController, NSString;

@interface _PBUIWallpaperViewControllerAssertion : NSObject <BSInvalidatable, BSDescriptionProviding>

@property (nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly, weak, nonatomic) PBUIWallpaperViewController *wallpaperViewController;
@property (readonly) long long type;
@property (readonly, copy, nonatomic) NSString *reason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)succinctDescriptionBuilder;
- (void)invalidate;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)initWithWallpaperViewController:(id)a0 type:(long long)a1 reason:(id)a2;

@end
