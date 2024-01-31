@class NSString;

@interface _MRDiscoverySessionConfigurationProtobuf : PBCodable <NSCopying> {
    struct { unsigned char features : 1; unsigned char targetSessionID : 1; unsigned char alwaysAllowUpdates : 1; unsigned char enableThrottling : 1; unsigned char populatesExternalDevice : 1; } _has;
}

@property (nonatomic) BOOL hasFeatures;
@property (nonatomic) int features;
@property (readonly, nonatomic) BOOL hasRoutingContextUID;
@property (retain, nonatomic) NSString *routingContextUID;
@property (nonatomic) BOOL hasEnableThrottling;
@property (nonatomic) BOOL enableThrottling;
@property (nonatomic) BOOL hasAlwaysAllowUpdates;
@property (nonatomic) BOOL alwaysAllowUpdates;
@property (nonatomic) BOOL hasPopulatesExternalDevice;
@property (nonatomic) BOOL populatesExternalDevice;
@property (readonly, nonatomic) BOOL hasOutputDeviceUID;
@property (retain, nonatomic) NSString *outputDeviceUID;
@property (nonatomic) BOOL hasTargetSessionID;
@property (nonatomic) unsigned int targetSessionID;

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
- (int)StringAsFeatures:(id)a0;
- (id)featuresAsString:(int)a0;

@end
