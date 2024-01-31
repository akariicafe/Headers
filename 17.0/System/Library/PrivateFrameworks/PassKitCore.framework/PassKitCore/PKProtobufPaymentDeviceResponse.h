@class NSMutableArray;

@interface PKProtobufPaymentDeviceResponse : PBCodable <NSCopying> {
    struct { unsigned char defaultPaymentInstrumentIndex : 1; unsigned char nearby : 1; unsigned char protocolVersion : 1; unsigned char deviceDisabled : 1; unsigned char locked : 1; unsigned char supportsFaceID : 1; unsigned char userDisabled : 1; } _has;
}

@property (nonatomic) BOOL hasLocked;
@property (nonatomic) BOOL locked;
@property (retain, nonatomic) NSMutableArray *paymentInstruments;
@property (nonatomic) BOOL hasDefaultPaymentInstrumentIndex;
@property (nonatomic) unsigned int defaultPaymentInstrumentIndex;
@property (nonatomic) BOOL hasUserDisabled;
@property (nonatomic) BOOL userDisabled;
@property (nonatomic) BOOL hasDeviceDisabled;
@property (nonatomic) BOOL deviceDisabled;
@property (nonatomic) BOOL hasNearby;
@property (nonatomic) int nearby;
@property (nonatomic) BOOL hasProtocolVersion;
@property (nonatomic) unsigned int protocolVersion;
@property (nonatomic) BOOL hasSupportsFaceID;
@property (nonatomic) BOOL supportsFaceID;
@property (retain, nonatomic) NSMutableArray *supportedSetupFeatures;

+ (Class)paymentInstrumentsType;
+ (Class)supportedSetupFeaturesType;

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
- (id)nearbyAsString:(int)a0;
- (int)StringAsNearby:(id)a0;
- (void)addPaymentInstruments:(id)a0;
- (void)addSupportedSetupFeatures:(id)a0;
- (void)clearPaymentInstruments;
- (void)clearSupportedSetupFeatures;
- (id)paymentInstrumentsAtIndex:(unsigned long long)a0;
- (unsigned long long)paymentInstrumentsCount;
- (id)supportedSetupFeaturesAtIndex:(unsigned long long)a0;
- (unsigned long long)supportedSetupFeaturesCount;

@end
