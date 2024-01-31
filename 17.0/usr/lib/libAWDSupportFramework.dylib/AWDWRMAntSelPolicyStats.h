@interface AWDWRMAntSelPolicyStats : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char issueBand : 1; unsigned char issueType : 1; unsigned char hasAntConstraint : 1; unsigned char isCoexBand : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasIssueBand;
@property (nonatomic) unsigned int issueBand;
@property (nonatomic) BOOL hasIssueType;
@property (nonatomic) unsigned int issueType;
@property (nonatomic) BOOL hasIsCoexBand;
@property (nonatomic) BOOL isCoexBand;
@property (nonatomic) BOOL hasHasAntConstraint;
@property (nonatomic) BOOL hasAntConstraint;

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
