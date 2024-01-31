@class NSString;

@interface ATXPBPredictionUserContext : PBCodable <NSCopying> {
    struct { unsigned char lastAppLaunchDate : 1; unsigned char lastUnlockDate : 1; } _has;
}

@property (nonatomic) BOOL hasLastUnlockDate;
@property (nonatomic) double lastUnlockDate;
@property (readonly, nonatomic) BOOL hasLastAppLaunch;
@property (retain, nonatomic) NSString *lastAppLaunch;
@property (nonatomic) BOOL hasLastAppLaunchDate;
@property (nonatomic) double lastAppLaunchDate;
@property (readonly, nonatomic) BOOL hasSecondMostRecentAppLaunch;
@property (retain, nonatomic) NSString *secondMostRecentAppLaunch;
@property (readonly, nonatomic) BOOL hasLastAppActionLaunch;
@property (retain, nonatomic) NSString *lastAppActionLaunch;

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
