@interface VCMediaNegotiationBlobCaptionsSettings : PBCodable <NSCopying> {
    struct { unsigned char senderLanguages : 1; unsigned char canDisplayCaptions : 1; } _has;
}

@property (nonatomic) BOOL hasCanDisplayCaptions;
@property (nonatomic) BOOL canDisplayCaptions;
@property (nonatomic) BOOL hasSenderLanguages;
@property (nonatomic) unsigned int senderLanguages;

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
