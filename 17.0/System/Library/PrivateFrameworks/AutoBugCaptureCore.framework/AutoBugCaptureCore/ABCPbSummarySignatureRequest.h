@class NSString, NSMutableArray;

@interface ABCPbSummarySignatureRequest : PBRequest <NSCopying> {
    struct { unsigned char caseClosedTime : 1; unsigned char caseStartTime : 1; unsigned char logSizeTotal : 1; unsigned char remoteTrigger : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasDomain;
@property (retain, nonatomic) NSString *domain;
@property (readonly, nonatomic) BOOL hasType;
@property (retain, nonatomic) NSString *type;
@property (readonly, nonatomic) BOOL hasSubtype;
@property (retain, nonatomic) NSString *subtype;
@property (readonly, nonatomic) BOOL hasSubtypeContext;
@property (retain, nonatomic) NSString *subtypeContext;
@property (readonly, nonatomic) BOOL hasCaseIdentifier;
@property (retain, nonatomic) NSString *caseIdentifier;
@property (readonly, nonatomic) BOOL hasProcess;
@property (retain, nonatomic) NSString *process;
@property (readonly, nonatomic) BOOL hasBuild;
@property (retain, nonatomic) NSString *build;
@property (readonly, nonatomic) BOOL hasBuildVariant;
@property (retain, nonatomic) NSString *buildVariant;
@property (readonly, nonatomic) BOOL hasCaseGroupIdentifier;
@property (retain, nonatomic) NSString *caseGroupIdentifier;
@property (nonatomic) BOOL hasLogSizeTotal;
@property (nonatomic) unsigned int logSizeTotal;
@property (nonatomic) BOOL hasCaseClosedTime;
@property (nonatomic) double caseClosedTime;
@property (readonly, nonatomic) BOOL hasCaseClosureType;
@property (retain, nonatomic) NSString *caseClosureType;
@property (nonatomic) BOOL hasCaseStartTime;
@property (nonatomic) double caseStartTime;
@property (readonly, nonatomic) BOOL hasCaseContext;
@property (retain, nonatomic) NSString *caseContext;
@property (readonly, nonatomic) BOOL hasCaseDampeningType;
@property (retain, nonatomic) NSString *caseDampeningType;
@property (readonly, nonatomic) BOOL hasCaseEffectiveProcess;
@property (retain, nonatomic) NSString *caseEffectiveProcess;
@property (readonly, nonatomic) BOOL hasCaseRelatedProcesses;
@property (retain, nonatomic) NSString *caseRelatedProcesses;
@property (readonly, nonatomic) BOOL hasCaseThresholdValues;
@property (retain, nonatomic) NSString *caseThresholdValues;
@property (nonatomic) BOOL hasRemoteTrigger;
@property (nonatomic) BOOL remoteTrigger;
@property (retain, nonatomic) NSMutableArray *attachments;

+ (Class)attachmentsType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)attachmentsCount;
- (id)description;
- (id)attachmentsAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)addAttachments:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearAttachments;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
