@class NSString;

@interface CKSnapshotCacheKey : NSObject <NSCopying>

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) long long interfaceStyle;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property (readonly, nonatomic) NSString *stringValue;

+ (id)keyWithIdentifier:(id)a0 interfaceStyle:(long long)a1 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0 interfaceStyle:(long long)a1 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)keyWithOppositeInterfaceStyle;

@end
