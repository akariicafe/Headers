@class SYPeer;

@interface SYClock : PBCodable <NSCopying>

@property (retain, nonatomic) SYPeer *peer;
@property (nonatomic) unsigned long long version;

+ (void)initialize;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (unsigned long long)increment;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_myDescription;
- (unsigned long long)increaseBy:(unsigned long long)a0;

@end
