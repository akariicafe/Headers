@class NSString, NTPBRecordBase;

@interface NTPBResourceRecord : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasBase;
@property (retain, nonatomic) NTPBRecordBase *base;
@property (readonly, nonatomic) BOOL hasMimeType;
@property (retain, nonatomic) NSString *mimeType;
@property (readonly, nonatomic) BOOL hasEncoding;
@property (retain, nonatomic) NSString *encoding;
@property (readonly, nonatomic) BOOL hasUrl;
@property (retain, nonatomic) NSString *url;

- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
