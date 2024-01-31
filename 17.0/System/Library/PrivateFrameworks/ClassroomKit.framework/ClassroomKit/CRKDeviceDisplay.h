@class NSDictionary;

@interface CRKDeviceDisplay : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double scaleFactor;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (readonly, nonatomic) unsigned long long orientation;
@property (readonly, nonatomic) NSDictionary *dictionaryValue;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithScaleFactor:(double)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 orientation:(unsigned long long)a2;
- (id)initWithScaleFactor:(double)a0 width:(double)a1 height:(double)a2 orientation:(unsigned long long)a3;

@end
