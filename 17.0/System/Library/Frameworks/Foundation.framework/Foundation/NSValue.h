@interface NSValue : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct { long long x0; long long x1; long long x2; long long x3; unsigned long long x4; long long x5; long long x6; long long x7; long long x8; long long x9; long long x10; long long x11; long long x12; long long x13; long long x14; long long x15; long long x16; long long x17; long long x18; BOOL x19; BOOL x20; BOOL x21; } _cfLexiconWordAttributesValue;
@property (readonly) const char *objCType;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)valueWithPointer:(const void *)a0;
+ (id)valueWithPoint:(struct CGPoint { double x0; double x1; })a0;
+ (id)valueWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
+ (id)_valueWithCFLexiconWordAttributes:(struct { long long x0; long long x1; long long x2; long long x3; unsigned long long x4; long long x5; long long x6; long long x7; long long x8; long long x9; long long x10; long long x11; long long x12; long long x13; long long x14; long long x15; long long x16; long long x17; long long x18; BOOL x19; BOOL x20; BOOL x21; })a0;
+ (id)value:(const void *)a0 withObjCType:(const char *)a1;
+ (id)valueWithBytes:(const void *)a0 objCType:(const char *)a1;
+ (id)valueWithEdgeInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a0;
+ (id)valueWithNonretainedObject:(id)a0;
+ (id)valueWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (id)valueWithSize:(struct CGSize { double x0; double x1; })a0;
+ (id)valueWithWeakObject:(id)a0;

- (id)replacementObjectForPortCoder:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (BOOL)isNSValue__;
- (id)initWithBytes:(const void *)a0 objCType:(const char *)a1;
- (void)encodeWithCoder:(id)a0;
- (id)nonretainedObjectValue;
- (void)getValue:(void *)a0 size:(unsigned long long)a1;
- (Class)classForCoder;
- (void)getValue:(void *)a0;
- (id)description;
- (struct CGPoint { double x0; double x1; })pointValue;
- (BOOL)_matchType:(const char *)a0 size:(unsigned long long)a1 strict:(BOOL)a2;
- (BOOL)isEqual:(id)a0;
- (id)weakObjectValue;
- (BOOL)isEqualToValue:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })edgeInsetsValue;
- (BOOL)_matchType:(const char *)a0 size:(unsigned long long)a1;
- (void *)pointerValue;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeValue;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectValue;
- (struct CGSize { double x0; double x1; })sizeValue;

@end
