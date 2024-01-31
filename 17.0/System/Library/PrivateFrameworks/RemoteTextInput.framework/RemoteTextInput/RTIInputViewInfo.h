@interface RTIInputViewInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } insets;
@property (nonatomic) unsigned int contextId;
@property (nonatomic) BOOL shouldShowDockView;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
