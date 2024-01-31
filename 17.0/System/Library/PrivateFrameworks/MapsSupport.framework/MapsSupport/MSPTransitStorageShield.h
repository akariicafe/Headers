@class NSString, PBUnknownFields;

@interface MSPTransitStorageShield : PBCodable <GEOTransitShieldDataSource, NSCopying> {
    PBUnknownFields *_unknownFields;
    struct { unsigned char shieldType : 1; } _has;
}

@property (readonly, nonatomic) long long shieldType;
@property (readonly, nonatomic) NSString *shieldText;
@property (readonly, nonatomic) NSString *shieldColorString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasShieldText;
@property (retain, nonatomic) NSString *shieldText;
@property (nonatomic) BOOL hasShieldType;
@property (nonatomic) long long shieldType;
@property (readonly, nonatomic) BOOL hasShieldColorString;
@property (retain, nonatomic) NSString *shieldColorString;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithShield:(id)a0;

@end
