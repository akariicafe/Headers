@interface NPKProtoStandalonePaymentSetupProductPaymentOption : PBCodable <NSCopying> {
    struct { unsigned char cardType : 1; unsigned char priority : 1; unsigned char supportedProtocols : 1; } _has;
}

@property (nonatomic) BOOL hasPriority;
@property (nonatomic) unsigned long long priority;
@property (nonatomic) BOOL hasCardType;
@property (nonatomic) long long cardType;
@property (nonatomic) BOOL hasSupportedProtocols;
@property (nonatomic) long long supportedProtocols;

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
