@class SKTileSet, NSString, UIColor, NSDictionary, SKShader;

@interface SKTileMapNode : SKNode <NSCopying, NSSecureCoding> {
    void *_skcTileMapNode;
    SKTileSet *_tileSet;
    struct CGSize { double width; double height; } _tileSize;
    void /* unknown type, empty encoding */ _isoOrigin;
    void /* unknown type, empty encoding */ _isoColumnVector;
    void /* unknown type, empty encoding */ _isoRowVector;
    float _isoColumnWidth;
    float _isoRowHeight;
    float _isoHeightScalar;
    float _hexRadius;
    BOOL _enableAutomapping;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *tileSetName;
@property (nonatomic) unsigned long long numberOfColumns;
@property (nonatomic) unsigned long long numberOfRows;
@property (nonatomic) struct CGSize { double x0; double x1; } tileSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } mapSize;
@property (retain, nonatomic) SKTileSet *tileSet;
@property (nonatomic) double colorBlendFactor;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) long long blendMode;
@property (nonatomic) struct CGPoint { double x0; double x1; } anchorPoint;
@property (retain, nonatomic) SKShader *shader;
@property (copy, nonatomic) NSDictionary *attributeValues;
@property (nonatomic) unsigned int lightingBitMask;
@property (nonatomic) BOOL enableAutomapping;

+ (id)tileMapNodeWithTileSet:(id)a0 columns:(unsigned long long)a1 rows:(unsigned long long)a2 tileSize:(struct CGSize { double x0; double x1; })a3 fillWithTileGroup:(id)a4;
+ (id)debugHierarchyPropertyDescriptions;
+ (id)debugHierarchyValueForPropertyWithName:(id)a0 onObject:(id)a1 outOptions:(id *)a2 outError:(id *)a3;
+ (id)tileMapNodeWithTileSet:(id)a0 columns:(unsigned long long)a1 rows:(unsigned long long)a2 tileSize:(struct CGSize { double x0; double x1; })a3;
+ (id)tileMapNodeWithTileSet:(id)a0 columns:(unsigned long long)a1 rows:(unsigned long long)a2 tileSize:(struct CGSize { double x0; double x1; })a3 tileGroupLayout:(id)a4;

- (void)commonInit;
- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (double)alpha;
- (id)copy;
- (void)setAlpha:(double)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)removeAllTiles;
- (BOOL)isEqualToNode:(id)a0;
- (void)_didMakeBackingNode;
- (void *)_makeBackingNode;
- (void)applyTileStamp:(id)a0 inColumn:(long long)a1 row:(long long)a2;
- (void)calculateSize;
- (struct CGPoint { double x0; double x1; })centerOfTileAtColumn:(unsigned long long)a0 row:(unsigned long long)a1;
- (void)clearModifiedTileTracking;
- (id)createTileStampFromColumn:(unsigned long long)a0 row:(unsigned long long)a1 withWidth:(unsigned long long)a2 height:(unsigned long long)a3 addToTileSet:(BOOL)a4;
- (void)fillArray:(unsigned int *)a0 withTilesFromColumn:(unsigned long long)a1 row:(unsigned long long)a2 forWidth:(unsigned long long)a3 height:(unsigned long long)a4;
- (void)fillArrayWithTiles:(unsigned int *)a0;
- (void)fillWithTileDefinition:(id)a0;
- (void)fillWithTileGroup:(id)a0;
- (void)forceRedraw;
- (unsigned int)getTileIDWithTileGroup:(id)a0 andTileDefinition:(id)a1;
- (void)getTileModifiedData:(long long *)a0 outMinRowModified:(long long *)a1 outMaxColumnModified:(long long *)a2 outmaxRowModified:(long long *)a3;
- (id)initWithTileSet:(id)a0 columns:(unsigned long long)a1 rows:(unsigned long long)a2 tileSize:(struct CGSize { double x0; double x1; })a3;
- (id)initWithTileSet:(id)a0 columns:(unsigned long long)a1 rows:(unsigned long long)a2 tileSize:(struct CGSize { double x0; double x1; })a3 fillWithTileGroup:(id)a4;
- (id)initWithTileSet:(id)a0 columns:(unsigned long long)a1 rows:(unsigned long long)a2 tileSize:(struct CGSize { double x0; double x1; })a3 tileGroupLayout:(id)a4;
- (void)rebuildTileSprites;
- (void)setColumns:(unsigned long long)a0 andRows:(long long)a1;
- (void)setRawTiles:(unsigned int *)a0 rows:(unsigned long long)a1 columns:(unsigned long long)a2;
- (void)setStartData:(unsigned long long)a0 rows:(unsigned long long)a1 tileSize:(struct CGSize { double x0; double x1; })a2 tileSet:(id)a3;
- (void)setTileGroup:(id)a0 andTileDefinition:(id)a1 forColumn:(unsigned long long)a2 row:(unsigned long long)a3;
- (void)setTileGroup:(id)a0 andTileDefinition:(id)a1 forTileIndicies:(id)a2;
- (void)setTileGroup:(id)a0 forColumn:(unsigned long long)a1 row:(unsigned long long)a2;
- (void)setTileGroup:(id)a0 forTileIndicies:(id)a1;
- (void)setTileGroupWithoutUpdate:(id)a0 forColumn:(unsigned long long)a1 row:(unsigned long long)a2;
- (void)setTileGroupWithoutUpdate:(id)a0 tileDefinition:(id)a1 forColumn:(unsigned long long)a2 row:(unsigned long long)a3;
- (void)setTilesFromArray:(unsigned int *)a0;
- (void)setTilesFromArray:(unsigned int *)a0 fromColumn:(unsigned long long)a1 row:(unsigned long long)a2 forWidth:(unsigned long long)a3 height:(unsigned long long)a4;
- (void)setValue:(id)a0 forAttributeNamed:(id)a1;
- (BOOL)shouldUnarchiveTileSet;
- (unsigned long long)tileColumnIndexFromPosition:(struct CGPoint { double x0; double x1; })a0;
- (id)tileDefinitionAtColumn:(unsigned long long)a0 row:(unsigned long long)a1;
- (id)tileDefinitionForTileID:(unsigned int)a0;
- (id)tileGroupAtColumn:(unsigned long long)a0 row:(unsigned long long)a1;
- (unsigned long long)tileRowIndexFromPosition:(struct CGPoint { double x0; double x1; })a0;
- (void)updateTileDefinitionWithoutAutomappingAtX:(unsigned long long)a0 y:(unsigned long long)a1;
- (void)updateTileGroupsAtX:(unsigned long long)a0 y:(unsigned long long)a1;
- (void)validateAllTiles;
- (id)valueForAttributeNamed:(id)a0;

@end
