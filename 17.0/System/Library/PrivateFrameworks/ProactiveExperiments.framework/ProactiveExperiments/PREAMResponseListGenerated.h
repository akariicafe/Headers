@class NSString;

@interface PREAMResponseListGenerated : PBCodable <NSCopying> {
    struct { unsigned char ageGroup : 1; unsigned char generationStatus : 1; unsigned char numberOfCustomResponses : 1; unsigned char numberOfResponsesGenerated : 1; unsigned char numberOfRobotResponses : 1; unsigned char isApricotDevice : 1; unsigned char isCached : 1; } _has;
}

@property (nonatomic) BOOL hasIsCached;
@property (nonatomic) BOOL isCached;
@property (nonatomic) BOOL hasGenerationStatus;
@property (nonatomic) int generationStatus;
@property (nonatomic) BOOL hasNumberOfResponsesGenerated;
@property (nonatomic) unsigned int numberOfResponsesGenerated;
@property (nonatomic) BOOL hasNumberOfCustomResponses;
@property (nonatomic) unsigned int numberOfCustomResponses;
@property (nonatomic) BOOL hasNumberOfRobotResponses;
@property (nonatomic) unsigned int numberOfRobotResponses;
@property (readonly, nonatomic) BOOL hasExperimentId;
@property (retain, nonatomic) NSString *experimentId;
@property (readonly, nonatomic) BOOL hasTreatmentId;
@property (retain, nonatomic) NSString *treatmentId;
@property (readonly, nonatomic) BOOL hasTreatmentModelName;
@property (retain, nonatomic) NSString *treatmentModelName;
@property (readonly, nonatomic) BOOL hasHostProcess;
@property (retain, nonatomic) NSString *hostProcess;
@property (readonly, nonatomic) BOOL hasLocale;
@property (retain, nonatomic) NSString *locale;
@property (readonly, nonatomic) BOOL hasLang;
@property (retain, nonatomic) NSString *lang;
@property (nonatomic) BOOL hasIsApricotDevice;
@property (nonatomic) BOOL isApricotDevice;
@property (nonatomic) BOOL hasAgeGroup;
@property (nonatomic) int ageGroup;

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
- (int)StringAsAgeGroup:(id)a0;
- (int)StringAsGenerationStatus:(id)a0;
- (id)ageGroupAsString:(int)a0;
- (id)generationStatusAsString:(int)a0;

@end
