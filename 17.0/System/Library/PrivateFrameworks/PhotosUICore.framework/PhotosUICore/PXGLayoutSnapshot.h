@class NSDictionary, PXGSpriteDataStore;

@interface PXGLayoutSnapshot : NSObject

@property (readonly, nonatomic) NSDictionary *identifierSourceByDataSourceIdentifier;
@property (readonly, nonatomic) NSDictionary *identifierSourceByDataSourceIdentifierHash;
@property (readonly, nonatomic) NSDictionary *spriteIndexesByObjectIdentifier;
@property (readonly, nonatomic) PXGSpriteDataStore *spriteDataStore;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } visibleRect;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithLayout:(id)a0 spriteDataStore:(id)a1;
- (void)applyViewportShift:(struct CGPoint { double x0; double x1; })a0;
- (void)enumerateObjectIdentifiersForInfos:(const struct { unsigned char x0; unsigned char x1; float x2; long long x3; unsigned short x4; unsigned char x5; } *)a0 count:(unsigned int)a1 usingBlock:(id /* block */)a2;
- (void)enumerateObjectIdentifiersForSpriteIndexes:(id)a0 infos:(const struct { unsigned char x0; unsigned char x1; float x2; long long x3; unsigned short x4; unsigned char x5; } *)a1 usingBlock:(id /* block */)a2;
- (void)enumerateSpritesWithObjectIdentifier:(id)a0 usingBlock:(id /* block */)a1;
- (void)releaseSpriteDataStore;

@end
