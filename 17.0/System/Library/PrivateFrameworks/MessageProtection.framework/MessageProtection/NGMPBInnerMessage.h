@class NSData;

@interface NGMPBInnerMessage : PBCodable <NSCopying> {
    struct { unsigned char counter : 1; } _has;
}

@property (retain, nonatomic) NSData *message;
@property (nonatomic) BOOL hasCounter;
@property (nonatomic) unsigned int counter;
@property (readonly, nonatomic) BOOL hasKtGossipData;
@property (retain, nonatomic) NSData *ktGossipData;
@property (readonly, nonatomic) BOOL hasDebugInfo;
@property (retain, nonatomic) NSData *debugInfo;

- (unsigned long long)hash;
- (id)attributes;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
