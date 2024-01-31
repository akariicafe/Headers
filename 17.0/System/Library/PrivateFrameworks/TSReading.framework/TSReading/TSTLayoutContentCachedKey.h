@class NSString, TSWPParagraphStyle;

@interface TSTLayoutContentCachedKey : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *string;
@property (readonly, nonatomic) double width;
@property (readonly, nonatomic) double height;
@property (readonly, nonatomic) TSWPParagraphStyle *paragraphStyle;
@property (readonly, nonatomic) BOOL cellWraps;
@property (readonly, nonatomic) int valueType;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } paddingInsets;
@property (readonly, nonatomic) unsigned int verticalAlignment;
@property (readonly, nonatomic) int writingDirection;

- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithString:(id)a0 width:(double)a1 height:(double)a2 paragraphStyle:(id)a3 cellWraps:(BOOL)a4 valueType:(int)a5 paddingInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a6 verticalAlignment:(unsigned int)a7 writingDirection:(int)a8;
- (BOOL)isEqualToLayoutContentCachedKey:(id)a0;

@end
