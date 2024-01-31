@class NSMutableArray, _MRNowPlayingPlayerPathProtobuf;

@interface _MRUpdateContentItemMessageProtobuf : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *contentItems;
@property (readonly, nonatomic) BOOL hasPlayerPath;
@property (retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath;

+ (Class)contentItemsType;

- (unsigned long long)hash;
- (void)clearContentItems;
- (unsigned long long)contentItemsCount;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addContentItems:(id)a0;
- (id)contentItemsAtIndex:(unsigned long long)a0;

@end
