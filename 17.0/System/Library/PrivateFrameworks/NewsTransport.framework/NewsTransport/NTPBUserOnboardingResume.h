@class NSString;

@interface NTPBUserOnboardingResume : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasOnboardResumeStage;
@property (retain, nonatomic) NSString *onboardResumeStage;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
