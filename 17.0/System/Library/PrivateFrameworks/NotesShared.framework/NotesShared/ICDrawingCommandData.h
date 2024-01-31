@class NSUUID;

@interface ICDrawingCommandData : NSObject {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _cachedBounds;
}

@property (nonatomic) unsigned int type;
@property (retain, nonatomic) struct CGColor { } *color;
@property (nonatomic) struct { struct CGPoint { double x; double y; } point; double radius; double opacity; double azimuth; double edgeWidth; double aspectRatio; double timestamp; } baseValues;
@property (nonatomic) struct { double baseAlpha; double blendAlpha; double targetMultiple; } parameters;
@property (readonly, nonatomic) unsigned int randomSeed;
@property BOOL isClipped;
@property (nonatomic) struct CGPoint { double x; double y; } clipOrigin;
@property (nonatomic) struct CGPoint { double x; double y; } clipNormal;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (nonatomic) struct ICDrawingCommandID { unsigned int clock; NSUUID *replicaUUID; unsigned int subclock; } commandID;
@property (readonly, nonatomic) struct vector<ICDrawingOutputPoint, std::allocator<ICDrawingOutputPoint>> { struct *__begin_; struct *__end_; struct __compressed_pair<ICDrawingOutputPoint *, std::allocator<ICDrawingOutputPoint>> { struct *__value_; } __end_cap_; } points;

- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
- (id).cxx_construct;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (struct { struct CGPoint { double x0; double x1; } x0; double x1; double x2; double x3; double x4; double x5; double x6; })readPointFromArchive:(const void *)a0 deltaFrom:(const struct { struct CGPoint { double x0; double x1; } x0; double x1; double x2; double x3; double x4; double x5; double x6; } *)a1;
- (id)initWithArchive:(const void *)a0 version:(unsigned int)a1 sortedUUIDs:(id)a2;
- (void)invalidateBounds;
- (BOOL)isEqualDrawingCommandData:(id)a0;
- (double)renderCost;
- (unsigned int)savePoint:(const struct { struct CGPoint { double x0; double x1; } x0; double x1; double x2; double x3; double x4; double x5; double x6; } *)a0 deltaFrom:(const struct { struct CGPoint { double x0; double x1; } x0; double x1; double x2; double x3; double x4; double x5; double x6; } *)a1 toArchive:(void *)a2;
- (unsigned int)saveToArchive:(void *)a0 sortedUUIDs:(id)a1 withPathData:(BOOL)a2 isHidden:(BOOL)a3;
- (struct { double x0; double x1; double x2; })version1Parameters;

@end
