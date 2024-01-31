@class NSData, NSString;

@interface HKHealthWrapCodableValue : PBCodable <NSCopying> {
    struct { unsigned char integer : 1; unsigned char type : 1; } _has;
}

@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) BOOL hasBytes;
@property (retain, nonatomic) NSData *bytes;
@property (readonly, nonatomic) BOOL hasString;
@property (retain, nonatomic) NSString *string;
@property (nonatomic) BOOL hasInteger;
@property (nonatomic) long long integer;

- (unsigned long long)hash;
- (id)typeAsString:(int)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (int)StringAsType:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
