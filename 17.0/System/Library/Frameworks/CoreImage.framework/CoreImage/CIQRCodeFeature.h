@class NSString, CIQRCodeDescriptor;

@interface CIQRCodeFeature : CIFeature <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property (readonly) struct CGPoint { double x; double y; } topLeft;
@property (readonly) struct CGPoint { double x; double y; } topRight;
@property (readonly) struct CGPoint { double x; double y; } bottomLeft;
@property (readonly) struct CGPoint { double x; double y; } bottomRight;
@property (readonly) NSString *messageString;
@property (readonly) CIQRCodeDescriptor *symbolDescriptor;

+ (id)featureWithInternalRepresentation:(struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGPoint { double x0; double x1; } x2; struct CGPoint { double x0; double x1; } x3; struct CGPoint { double x0; double x1; } x4; id x5; } *)a0;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)type;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithInternalRepresentation:(struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGPoint { double x0; double x1; } x2; struct CGPoint { double x0; double x1; } x3; struct CGPoint { double x0; double x1; } x4; id x5; } *)a0;

@end
