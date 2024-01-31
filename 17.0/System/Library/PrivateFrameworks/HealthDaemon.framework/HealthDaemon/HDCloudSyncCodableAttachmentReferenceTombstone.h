@class NSString;

@interface HDCloudSyncCodableAttachmentReferenceTombstone : PBCodable <NSCopying> {
    struct { unsigned char creationDate : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasReferenceIdentifier;
@property (retain, nonatomic) NSString *referenceIdentifier;
@property (readonly, nonatomic) BOOL hasSchemaIdentifier;
@property (retain, nonatomic) NSString *schemaIdentifier;
@property (nonatomic) BOOL hasCreationDate;
@property (nonatomic) double creationDate;

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
