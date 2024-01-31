@interface SKTileStamp : NSObject <NSSecureCoding> {
    unsigned int _columns;
    unsigned int _rows;
    unsigned int *_tileData;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long numberOfColumns;
@property (readonly, nonatomic) unsigned long long numberOfRows;
@property (readonly, nonatomic) unsigned int *tileData;

+ (id)tileStampWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 tileData:(unsigned int *)a2;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToNode:(id)a0;
- (id)initWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 tileData:(unsigned int *)a2;
- (void)setTileData:(unsigned int *)a0 size:(unsigned long long)a1;
- (id)tileDefinitionsForTileMap:(id)a0;

@end
