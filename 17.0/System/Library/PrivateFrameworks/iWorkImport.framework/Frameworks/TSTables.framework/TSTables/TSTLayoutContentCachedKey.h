@class NSString, TSWPParagraphStyle;
@protocol TSWPStyleProviding;

@interface TSTLayoutContentCachedKey : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *string;
@property (readonly, nonatomic) double width;
@property (readonly, nonatomic) double height;
@property (readonly, nonatomic) TSWPParagraphStyle *paragraphStyle;
@property (readonly, nonatomic) BOOL cellWraps;
@property (readonly, nonatomic) unsigned char valueType;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } paddingInsets;
@property (readonly, nonatomic) int verticalAlignment;
@property (readonly, nonatomic) int writingDirection;
@property (readonly, nonatomic) long long naturalAlignment;
@property (readonly, weak, nonatomic) id<TSWPStyleProviding> styleProvidingSource;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToLayoutContentCachedKey:(id)a0;
- (id)initWithString:(id)a0 width:(double)a1 height:(double)a2 paragraphStyle:(id)a3 cellWraps:(BOOL)a4 valueType:(unsigned char)a5 paddingInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a6 verticalAlignment:(int)a7 writingDirection:(int)a8 naturalAlignment:(long long)a9 styleProvidingSource:(id)a10;

@end
