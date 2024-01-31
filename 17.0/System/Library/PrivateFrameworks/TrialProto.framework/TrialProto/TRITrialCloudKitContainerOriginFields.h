@interface TRITrialCloudKitContainerOriginFields : PBCodable <NSCopying> {
    struct { unsigned char ckContainer : 1; unsigned char ckEnvironment : 1; } _has;
}

@property (nonatomic) BOOL hasCkEnvironment;
@property (nonatomic) int ckEnvironment;
@property (nonatomic) BOOL hasCkContainer;
@property (nonatomic) int ckContainer;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (int)StringAsCkEnvironment:(id)a0;
- (void)writeTo:(id)a0;
- (id)ckEnvironmentAsString:(int)a0;
- (id)description;
- (int)StringAsCkContainer:(id)a0;
- (id)ckContainerAsString:(int)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
