@class NSString, NSArray, QLToolbarButtonItemRepresentation, UIAlertController;

@interface QLToolbarButton : NSObject <NSSecureCoding> {
    QLToolbarButtonItemRepresentation *_currentItemRepresentation;
    UIAlertController *_alertController;
    id _target;
    SEL _action;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *identifier;
@property (copy, nonatomic) NSString *symbolImageName;
@property long long systemItem;
@property (copy) NSString *title;
@property (copy) NSString *accessibilityIdentifier;
@property (copy) NSArray *options;
@property unsigned long long placement;
@property BOOL useBundleImage;
@property BOOL useInternalSymbolImage;
@property BOOL forceToNavBar;
@property BOOL selected;
@property struct UIEdgeInsets { double top; double left; double bottom; double right; } _additionalSelectionInsets;
@property BOOL enabled;
@property BOOL roundedSelectedIndicator;
@property BOOL disappearsOnTap;

- (id)initWithIdentifier:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void)handleLongPress:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_barButtonImage;
- (id)barButtonWithTarget:(id)a0 action:(SEL)a1 maxSize:(struct CGSize { double x0; double x1; })a2;
- (void)invalidateCurrentState;

@end
