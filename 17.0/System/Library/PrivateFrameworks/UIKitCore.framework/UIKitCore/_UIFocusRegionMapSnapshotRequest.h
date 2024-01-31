@class UIFocusSystem, UIView;

@interface _UIFocusRegionMapSnapshotRequest : NSObject <NSCopying>

@property (weak, nonatomic) UIView *rootView;
@property (retain, nonatomic) UIFocusSystem *focusSystem;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } snapshotRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } viewSearchRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } focusedRect;
@property (nonatomic) unsigned long long focusHeading;
@property (nonatomic) BOOL includeFocusGuides;
@property (nonatomic) BOOL includeFocusContainerGuides;
@property (nonatomic) BOOL clipToSnapshotRect;
@property (weak, nonatomic) UIView *focusableRegionAncestorView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } visualRepresentationMinimumArea;

+ (id)requestWithRootView:(id)a0 focusSystem:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRootView:(id)a0 focusSystem:(id)a1;
- (id)takeSnapshot;

@end
