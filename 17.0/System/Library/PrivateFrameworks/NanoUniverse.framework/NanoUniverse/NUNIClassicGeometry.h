@interface NUNIClassicGeometry : NSObject

@property (readonly, nonatomic) struct NUNIClassicVertex { } *vertices;
@property (readonly, nonatomic) unsigned short *indices;
@property (readonly, nonatomic) int vcount;
@property (readonly, nonatomic) int icount;

- (void)dealloc;
- (int)addIndices:(const unsigned short *)a0 count:(int)a1 vbase:(int)a2;
- (int)addVertices:(const struct NUNIClassicVertex { } *)a0 count:(int)a1;

@end
