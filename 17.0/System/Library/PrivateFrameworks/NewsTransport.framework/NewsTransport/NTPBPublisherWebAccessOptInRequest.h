@class NSString;

@interface NTPBPublisherWebAccessOptInRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasChannelId;
@property (retain, nonatomic) NSString *channelId;
@property (readonly, nonatomic) BOOL hasEmail;
@property (retain, nonatomic) NSString *email;
@property (readonly, nonatomic) BOOL hasPurchaseReceipt;
@property (retain, nonatomic) NSString *purchaseReceipt;
@property (readonly, nonatomic) BOOL hasIapId;
@property (retain, nonatomic) NSString *iapId;
@property (readonly, nonatomic) BOOL hasLanguage;
@property (retain, nonatomic) NSString *language;
@property (readonly, nonatomic) BOOL hasCountry;
@property (retain, nonatomic) NSString *country;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
