@class NSData;

@interface SSPBSecretShare : PBCodable <NSCopying> {
    struct { unsigned char threshold : 1; } _has;
}

@property (nonatomic) unsigned int version;
@property (nonatomic) unsigned int shareX;
@property (retain, nonatomic) NSData *shareY;
@property (nonatomic) BOOL hasThreshold;
@property (nonatomic) unsigned int threshold;
@property (retain, nonatomic) NSData *iv;
@property (retain, nonatomic) NSData *ciphertext;
@property (retain, nonatomic) NSData *tag;
@property (readonly, nonatomic) BOOL hasAssociatedData;
@property (retain, nonatomic) NSData *associatedData;

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

@end
