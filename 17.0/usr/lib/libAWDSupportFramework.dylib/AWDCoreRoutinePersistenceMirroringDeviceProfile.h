@interface AWDCoreRoutinePersistenceMirroringDeviceProfile : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char ageOfDevice : 1; unsigned char deviceClass : 1; unsigned char placesAssociatedToDevice : 1; unsigned char timeIntervalSinceLastRecordAssociation : 1; unsigned char transitionsAssociatedToDevice : 1; unsigned char visitsAssociatedToDevice : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasDeviceClass;
@property (nonatomic) int deviceClass;
@property (nonatomic) BOOL hasAgeOfDevice;
@property (nonatomic) int ageOfDevice;
@property (nonatomic) BOOL hasVisitsAssociatedToDevice;
@property (nonatomic) int visitsAssociatedToDevice;
@property (nonatomic) BOOL hasPlacesAssociatedToDevice;
@property (nonatomic) int placesAssociatedToDevice;
@property (nonatomic) BOOL hasTransitionsAssociatedToDevice;
@property (nonatomic) int transitionsAssociatedToDevice;
@property (nonatomic) BOOL hasTimeIntervalSinceLastRecordAssociation;
@property (nonatomic) int timeIntervalSinceLastRecordAssociation;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
