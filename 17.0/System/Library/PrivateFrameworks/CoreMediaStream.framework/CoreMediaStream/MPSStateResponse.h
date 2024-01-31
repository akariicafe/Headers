@interface MPSStateResponse : PBCodable <NSCopying> {
    struct { unsigned char retryAfterSeconds : 1; unsigned char version : 1; unsigned char icplAction : 1; unsigned char mpsAction : 1; } _has;
}

@property (nonatomic) BOOL hasRetryAfterSeconds;
@property (nonatomic) long long retryAfterSeconds;
@property (nonatomic) BOOL hasMpsAction;
@property (nonatomic) int mpsAction;
@property (nonatomic) BOOL hasIcplAction;
@property (nonatomic) int icplAction;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) long long version;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsIcplAction:(id)a0;
- (int)StringAsMpsAction:(id)a0;
- (id)icplActionAsString:(int)a0;
- (id)mpsActionAsString:(int)a0;

@end
