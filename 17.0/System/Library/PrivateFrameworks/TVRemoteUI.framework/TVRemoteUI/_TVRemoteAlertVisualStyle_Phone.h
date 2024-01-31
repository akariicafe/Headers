@class NSString;

@interface _TVRemoteAlertVisualStyle_Phone : NSObject <TVRemoteAlertVisualStyleProviding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)backgroundMaterialView;
- (double)crossfadeDuration;
- (BOOL)allowsSwipeToDismiss;
- (BOOL)allowsTapToDismiss;
- (id)foregroundVisualEffect;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForParentView:(id)a0;
- (double)maximizedCornerRadius;
- (double)minimizedCornerRadius;
- (double)remoteHeight;
- (double)remoteWidth;

@end
