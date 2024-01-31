@class SYMessageHeader, NSString;

@interface SYResetRequest : PBRequest <NSCopying>

@property (retain, nonatomic) SYMessageHeader *header;
@property (readonly, nonatomic) BOOL hasCancelSessionID;
@property (retain, nonatomic) NSString *cancelSessionID;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
