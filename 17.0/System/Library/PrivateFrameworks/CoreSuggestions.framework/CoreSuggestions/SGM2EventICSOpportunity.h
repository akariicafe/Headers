@class NSString;

@interface SGM2EventICSOpportunity : PBCodable <NSCopying> {
    struct { unsigned char recipient : 1; unsigned char source : 1; unsigned char accountSetup : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasKey;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) BOOL hasSource;
@property (nonatomic) int source;
@property (nonatomic) BOOL hasRecipient;
@property (nonatomic) int recipient;
@property (nonatomic) BOOL hasAccountSetup;
@property (nonatomic) BOOL accountSetup;

- (int)StringAsSource:(id)a0;
- (id)sourceAsString:(int)a0;
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
- (int)StringAsRecipient:(id)a0;
- (id)recipientAsString:(int)a0;

@end
