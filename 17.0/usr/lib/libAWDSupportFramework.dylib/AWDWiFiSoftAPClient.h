@interface AWDWiFiSoftAPClient : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char enhancedSecurityType : 1; unsigned char failureReason : 1; unsigned char rssi : 1; unsigned char familyDevice : 1; unsigned char joinedByAutoHS : 1; unsigned char switchedToAnotherNetwork : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasFamilyDevice;
@property (nonatomic) BOOL familyDevice;
@property (nonatomic) BOOL hasJoinedByAutoHS;
@property (nonatomic) BOOL joinedByAutoHS;
@property (nonatomic) BOOL hasSwitchedToAnotherNetwork;
@property (nonatomic) BOOL switchedToAnotherNetwork;
@property (nonatomic) BOOL hasFailureReason;
@property (nonatomic) unsigned int failureReason;
@property (nonatomic) BOOL hasRssi;
@property (nonatomic) unsigned int rssi;
@property (nonatomic) BOOL hasEnhancedSecurityType;
@property (nonatomic) unsigned int enhancedSecurityType;

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
