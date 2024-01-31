@class NSMutableArray;

@interface GEOTileEditionUpdate : NSObject {
    NSMutableArray *_entries;
}

@property (nonatomic) BOOL flushEverything;
@property (nonatomic) BOOL invalidateEverything;

- (id)init;
- (void).cxx_destruct;
- (void)addTileset:(union { unsigned int x0; struct { unsigned char x0 : 8; union { struct { unsigned short x0 : 14; unsigned char x1 : 4; unsigned char x2 : 4; unsigned char x3 : 2; } x0; struct { unsigned char x0 : 8; unsigned short x1 : 16; } x1; } x1; } x1; })a0 edition:(unsigned int)a1 provider:(unsigned int)a2 invalidateOnly:(BOOL)a3;
- (id)initWithActiveTileGroup:(id)a0 oldActiveTileGroup:(id)a1 dataSetDiffers:(BOOL)a2 flushEverything:(BOOL)a3;
- (void)tileset:(union { unsigned int x0; struct { unsigned char x0 : 8; union { struct { unsigned short x0 : 14; unsigned char x1 : 4; unsigned char x2 : 4; unsigned char x3 : 2; } x0; struct { unsigned char x0 : 8; unsigned short x1 : 16; } x1; } x1; } x1; } *)a0 edition:(unsigned int *)a1 provider:(unsigned int *)a2 invalidateOnly:(BOOL *)a3 atIndex:(unsigned long long)a4;
- (unsigned long long)tilesetCount;

@end
