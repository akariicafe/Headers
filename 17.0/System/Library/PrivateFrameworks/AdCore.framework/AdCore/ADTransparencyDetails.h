@class NSString;

@interface ADTransparencyDetails : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasTransparencyDetailsUnavailableMessage;
@property (retain, nonatomic) NSString *transparencyDetailsUnavailableMessage;
@property (readonly, nonatomic) BOOL hasTransparencyRendererPayload;
@property (retain, nonatomic) NSString *transparencyRendererPayload;
@property (readonly, nonatomic) BOOL hasTransparencyRendererURL;
@property (retain, nonatomic) NSString *transparencyRendererURL;

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
