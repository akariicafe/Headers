@class CKCodeRecordTransport, NSData;

@interface CKDPTranscodeRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasRecord;
@property (retain, nonatomic) CKCodeRecordTransport *record;
@property (readonly, nonatomic) BOOL hasConstructedAssetDownloadParameters;
@property (retain, nonatomic) NSData *constructedAssetDownloadParameters;

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
