@class _UIGroupCompletion, NSArray, _UIDragBadge, UIView, NSMutableArray, UITargetedPreview;

@interface _UIFlocker : NSObject

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) _UIDragBadge *badge;
@property (retain, nonatomic) NSMutableArray *ghostPortals;
@property (nonatomic) BOOL isFlocked;
@property (nonatomic) unsigned long long itemCount;
@property (nonatomic) unsigned long long badgeValue;
@property (nonatomic) unsigned long long settings;
@property (retain, nonatomic) UITargetedPreview *primaryPlatterPreview;
@property (retain, nonatomic) NSArray *secondaryPlatterViews;
@property (copy, nonatomic) id /* block */ unflockPreviewProvider;
@property (retain, nonatomic) _UIGroupCompletion *groupCompletion;

- (id)initWithContainerView:(id)a0;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)unflock;
- (void)install;
- (struct CGPoint { double x0; double x1; })_badgeCenter;
- (void)_installGhostPortalForPreview:(id)a0;
- (id)_primaryPlatterView;
- (struct CGPoint { double x0; double x1; })badgeLocationInView:(id)a0;
- (void)flock;
- (void)unflockToDrag:(BOOL)a0 animated:(BOOL)a1;
- (void)updateFlockLocation;

@end
