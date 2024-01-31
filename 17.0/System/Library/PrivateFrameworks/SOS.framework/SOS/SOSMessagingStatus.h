@class SOSStatus, NSString;

@interface SOSMessagingStatus : PBCodable <NSCopying> {
    struct { unsigned char timeOfDetection : 1; unsigned char timeOfResolution : 1; unsigned char flowState : 1; unsigned char resolution : 1; unsigned char trigger : 1; unsigned char isPairedDeviceStatus : 1; } _has;
}

@property (readonly, nonatomic) SOSStatus *sosStatus;
@property (readonly, nonatomic) BOOL hasUuid;
@property (retain, nonatomic) NSString *uuid;
@property (nonatomic) BOOL hasTrigger;
@property (nonatomic) int trigger;
@property (nonatomic) BOOL hasTimeOfDetection;
@property (nonatomic) double timeOfDetection;
@property (nonatomic) BOOL hasTimeOfResolution;
@property (nonatomic) double timeOfResolution;
@property (nonatomic) BOOL hasResolution;
@property (nonatomic) int resolution;
@property (nonatomic) BOOL hasFlowState;
@property (nonatomic) int flowState;
@property (nonatomic) BOOL hasIsPairedDeviceStatus;
@property (nonatomic) BOOL isPairedDeviceStatus;

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
- (id)initWithSOSStatus:(id)a0;

@end
