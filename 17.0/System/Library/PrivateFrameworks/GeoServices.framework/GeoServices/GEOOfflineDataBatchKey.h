@class NSData;

@interface GEOOfflineDataBatchKey : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned int layer;
@property (readonly, nonatomic) NSData *key;

- (unsigned long long)hash;
- (id)initWithLayer:(unsigned int)a0 key:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
