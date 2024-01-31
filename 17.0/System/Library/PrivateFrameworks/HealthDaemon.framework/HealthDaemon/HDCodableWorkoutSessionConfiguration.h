@class NSString, HDCodableWorkoutConfiguration;

@interface HDCodableWorkoutSessionConfiguration : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasWorkoutConfiguration;
@property (retain, nonatomic) HDCodableWorkoutConfiguration *workoutConfiguration;
@property (readonly, nonatomic) BOOL hasSourceBundleIdentifier;
@property (retain, nonatomic) NSString *sourceBundleIdentifier;

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
