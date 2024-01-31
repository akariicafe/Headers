@class AWDHomeKitVendorInformation;

@interface AWDHomeKitTargetControllerError : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char certified : 1; unsigned char error : 1; unsigned char transportType : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasError;
@property (nonatomic) int error;
@property (readonly, nonatomic) BOOL hasVendorDetails;
@property (retain, nonatomic) AWDHomeKitVendorInformation *vendorDetails;
@property (nonatomic) BOOL hasTransportType;
@property (nonatomic) int transportType;
@property (nonatomic) BOOL hasCertified;
@property (nonatomic) int certified;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (int)StringAsTransportType:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)transportTypeAsString:(int)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsError:(id)a0;
- (id)errorAsString:(int)a0;
- (int)StringAsCertified:(id)a0;
- (id)certifiedAsString:(int)a0;

@end
