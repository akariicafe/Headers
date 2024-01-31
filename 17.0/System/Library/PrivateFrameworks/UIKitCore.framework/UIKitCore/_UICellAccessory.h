@class NSString, UIView;

@interface _UICellAccessory : NSObject

@property (readonly, nonatomic) BOOL alwaysNeedsLayout;
@property (copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) UIView *view;
@property (nonatomic) double reservedLayoutWidth;

+ (id)accessoryWithIdentifier:(id)a0;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
