@interface TMLDirectionalEdgeInsets : NSObject <TMLDirectionalEdgeInsetsJSExports, NSCopying>

@property (readonly, nonatomic) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } directionalEdgeInsets;
@property (readonly, nonatomic) double top;
@property (readonly, nonatomic) double leading;
@property (readonly, nonatomic) double bottom;
@property (readonly, nonatomic) double trailing;

+ (void)initializeJSContext:(id)a0;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)NSDirectionalEdgeInsetsValue;
- (id)initWithDirectionalEdgeInsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a0;

@end
