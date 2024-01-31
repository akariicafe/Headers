@interface NSCollectionLayoutAnchor : NSObject <NSCopying>

@property (nonatomic) unsigned long long edges;
@property (nonatomic) struct CGPoint { double x; double y; } offset;
@property (nonatomic) struct CGPoint { double x; double y; } anchorPoint;
@property (nonatomic) BOOL offsetIsUnitOffset;
@property (readonly, nonatomic) BOOL isAbsoluteOffset;
@property (readonly, nonatomic) BOOL isFractionalOffset;

+ (id)layoutAnchorWithAnchorPoint:(struct CGPoint { double x0; double x1; })a0 offset:(struct CGPoint { double x0; double x1; })a1;
+ (id)layoutAnchorWithEdges:(unsigned long long)a0 fractionalOffset:(struct CGPoint { double x0; double x1; })a1;
+ (id)layoutAnchorWithEdges:(unsigned long long)a0;
+ (id)layoutAnchorWithEdges:(unsigned long long)a0 absoluteOffset:(struct CGPoint { double x0; double x1; })a1;
+ (id)layoutAnchorWithAnchorPoint:(struct CGPoint { double x0; double x1; })a0 unitOffset:(struct CGPoint { double x0; double x1; })a1;
+ (id)layoutAnchorWithAnchorPoint:(struct CGPoint { double x0; double x1; })a0;

- (id)initWithEdges:(unsigned long long)a0 offset:(struct CGPoint { double x0; double x1; })a1 anchorPoint:(struct CGPoint { double x0; double x1; })a2 offsetIsUnitOffset:(BOOL)a3;
- (id)description;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_itemFrameForContainerRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 itemSize:(struct CGSize { double x0; double x1; })a1 itemLayoutAnchor:(id)a2;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
