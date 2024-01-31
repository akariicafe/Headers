@class NSString;

@interface HKCodablePrescriptionType : PBCodable <NSCopying> {
    struct APPLE_HKCodablePrescriptionType_1 { unsigned char contacts : 1; } _has;
}

@property (nonatomic) BOOL hasContacts;
@property (nonatomic) BOOL contacts;
@property (readonly, nonatomic) BOOL hasGlassesDescription;
@property (retain, nonatomic) NSString *glassesDescription;

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
