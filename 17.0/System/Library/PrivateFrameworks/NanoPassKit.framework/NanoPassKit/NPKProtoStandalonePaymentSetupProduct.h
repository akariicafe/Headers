@class NSString, NSMutableArray, NPKProtoStandalonePaymentSetupProductImageAssetURLs;

@interface NPKProtoStandalonePaymentSetupProduct : PBCodable <NSCopying> {
    struct { unsigned char flags : 1; unsigned char hsa2Requirement : 1; unsigned char supportedProvisioningMethods : 1; unsigned char suppressPendingPurchases : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasDisplayName;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSMutableArray *regions;
@property (readonly, nonatomic) BOOL hasProductIdentifier;
@property (retain, nonatomic) NSString *productIdentifier;
@property (readonly, nonatomic) BOOL hasPartnerIdentifier;
@property (retain, nonatomic) NSString *partnerIdentifier;
@property (readonly, nonatomic) BOOL hasPartnerName;
@property (retain, nonatomic) NSString *partnerName;
@property (retain, nonatomic) NSMutableArray *requiredFields;
@property (retain, nonatomic) NSMutableArray *supportedProtocols;
@property (readonly, nonatomic) BOOL hasTermsURL;
@property (retain, nonatomic) NSString *termsURL;
@property (nonatomic) BOOL hasSupportedProvisioningMethods;
@property (nonatomic) long long supportedProvisioningMethods;
@property (readonly, nonatomic) BOOL hasReaderModeMetadataJson;
@property (retain, nonatomic) NSString *readerModeMetadataJson;
@property (nonatomic) BOOL hasFlags;
@property (nonatomic) long long flags;
@property (nonatomic) BOOL hasHsa2Requirement;
@property (nonatomic) long long hsa2Requirement;
@property (readonly, nonatomic) BOOL hasImageAssetURLs;
@property (retain, nonatomic) NPKProtoStandalonePaymentSetupProductImageAssetURLs *imageAssetURLs;
@property (nonatomic) BOOL hasSuppressPendingPurchases;
@property (nonatomic) BOOL suppressPendingPurchases;
@property (retain, nonatomic) NSMutableArray *paymentOptions;
@property (retain, nonatomic) NSMutableArray *requestedProvisioningMethods;

+ (Class)regionsType;
+ (Class)paymentOptionsType;
+ (Class)requestedProvisioningMethodsType;
+ (Class)requiredFieldsType;
+ (Class)supportedProtocolsType;

- (void)clearRegions;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addRegions:(id)a0;
- (unsigned long long)regionsCount;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)regionsAtIndex:(unsigned long long)a0;
- (void)addPaymentOptions:(id)a0;
- (void)addRequestedProvisioningMethods:(id)a0;
- (void)addRequiredFields:(id)a0;
- (void)addSupportedProtocols:(id)a0;
- (void)clearPaymentOptions;
- (void)clearRequestedProvisioningMethods;
- (void)clearRequiredFields;
- (void)clearSupportedProtocols;
- (id)paymentOptionsAtIndex:(unsigned long long)a0;
- (unsigned long long)paymentOptionsCount;
- (id)requestedProvisioningMethodsAtIndex:(unsigned long long)a0;
- (unsigned long long)requestedProvisioningMethodsCount;
- (id)requiredFieldsAtIndex:(unsigned long long)a0;
- (unsigned long long)requiredFieldsCount;
- (id)supportedProtocolsAtIndex:(unsigned long long)a0;
- (unsigned long long)supportedProtocolsCount;

@end
