@class _UIBarButtonItemData, NSArray, NSDictionary, UIImage, UIBarButtonItemAppearance;

@interface UIBarButtonItemStateAppearance : NSObject {
    UIBarButtonItemAppearance *_owner;
    long long _state;
}

@property (retain, nonatomic) _UIBarButtonItemData *data;
@property (copy, nonatomic) NSArray *itemEffects;
@property (copy, nonatomic) NSDictionary *titleTextAttributes;
@property (nonatomic) struct UIOffset { double x0; double x1; } titlePositionAdjustment;
@property (retain, nonatomic) UIImage *backgroundImage;
@property (nonatomic) struct UIOffset { double x0; double x1; } backgroundImagePositionAdjustment;

- (id)init;
- (void).cxx_destruct;
- (void)_writeToStorage:(id /* block */)a0;
- (void)_clearOwner;
- (id)_initWithOwner:(id)a0 data:(id)a1 state:(long long)a2;

@end
