@class NSString;

@interface MFQuickReplyExpandButton : UIButton <UIPointerInteractionDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buttonWithType:(long long)a0;

- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (id)_quickReplyExpandButtonPointerStyleInView:(id)a0;

@end
