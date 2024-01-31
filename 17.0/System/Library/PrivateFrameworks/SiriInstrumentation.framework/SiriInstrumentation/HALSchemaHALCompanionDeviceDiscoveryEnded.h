@class NSData;

@interface HALSchemaHALCompanionDeviceDiscoveryEnded : SISchemaInstrumentationMessage {
    struct { unsigned char discoveryType : 1; unsigned char isMeDevice : 1; unsigned char hasOtheriOSActiveDevices : 1; unsigned char hasNullPeerIdentityServicesId : 1; unsigned char deviceProximity : 1; } _has;
}

@property (nonatomic) int discoveryType;
@property (nonatomic) BOOL hasDiscoveryType;
@property (nonatomic) BOOL isMeDevice;
@property (nonatomic) BOOL hasIsMeDevice;
@property (nonatomic) BOOL hasOtheriOSActiveDevices;
@property (nonatomic) BOOL hasHasOtheriOSActiveDevices;
@property (nonatomic) BOOL hasNullPeerIdentityServicesId;
@property (nonatomic) BOOL hasHasNullPeerIdentityServicesId;
@property (nonatomic) int deviceProximity;
@property (nonatomic) BOOL hasDeviceProximity;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteDeviceProximity;
- (void)deleteDiscoveryType;
- (void)deleteHasNullPeerIdentityServicesId;
- (void)deleteHasOtheriOSActiveDevices;
- (void)deleteIsMeDevice;

@end
