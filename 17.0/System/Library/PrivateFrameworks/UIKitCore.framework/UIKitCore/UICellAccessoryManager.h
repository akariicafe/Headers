@class UICellAccessoryConfiguration, NSMutableDictionary, NSDictionary, NSString, UIView;
@protocol UICellAccessoryLayout;

@interface UICellAccessoryManager : NSObject {
    struct CGSize { double width; double height; } _enforcedContainerSize;
}

@property (weak, nonatomic) UIView *containerView;
@property (nonatomic) BOOL needsLayout;
@property (nonatomic) struct CGSize { double width; double height; } previousContainerSize;
@property (retain, nonatomic) UICellAccessoryConfiguration *previousConfiguration;
@property (retain, nonatomic) NSMutableDictionary *accessoryViews;
@property (nonatomic) long long animatedLayoutUpdatesCount;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } safeAreaInsets;
@property (copy, nonatomic) id /* block */ standardLayoutWidthProvider;
@property (copy, nonatomic) id /* block */ disclosureLayoutWidthProvider;
@property (retain, nonatomic) id<UICellAccessoryLayout> leadingLayout;
@property (retain, nonatomic) id<UICellAccessoryLayout> trailingLayout;
@property (retain, nonatomic) NSDictionary *configurations;
@property (copy, nonatomic) NSString *currentConfigurationIdentifier;
@property (readonly, nonatomic) UICellAccessoryConfiguration *currentConfiguration;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } containerSize;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } contentFrame;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInset;

- (id)initWithContainerView:(id)a0;
- (void)layoutIfNeeded;
- (void)performWithEnforcedContainerSize:(struct CGSize { double x0; double x1; })a0 block:(id /* block */)a1;
- (void)setNeedsLayout;
- (id)description;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })containerBounds;
- (void).cxx_destruct;
- (void)_updateFromPreviousConfiguration:(id)a0;
- (void)updateContainerView:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_updateAccessories:(id)a0 previousAccessories:(id)a1 withLayout:(id)a2 edge:(unsigned long long)a3;
- (id)_configurationWithIdentifier:(id)a0;

@end
