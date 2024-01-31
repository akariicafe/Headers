@class SGMIMetricsTrialMetadata, NSString, NSMutableArray;

@interface SGMIMetricsRegexSignatureStats : PBCodable <NSCopying> {
    struct { unsigned char numberOfLargeIncomingMailsWithAttachmentRoundedToClosestMultipleOf20 : 1; unsigned char numberOfLargeOutgoingMailsWithAttachmentRoundedToClosestMultipleOf20 : 1; unsigned char numberOfPredictedAttachmentOnLargeIncomingMailsWithAttachmentRoundedToClosestMultipleOf20 : 1; unsigned char numberOfPredictedAttachmentOnLargeOutgoingMailsWithAttachmentRoundedToClosestMultipleOf20 : 1; unsigned char totalNumberOfEmailsProcessedForAttachmentDetectionRoundedToClosestMultipleOf20 : 1; unsigned char totalNumberOfEmailsProcessedForFollowUpDetectionRoundedToClosestMultipleOf20 : 1; unsigned char totalNumberOfEmailsProcessedForRecipientDetectionRoundedToClosestMultipleOf20 : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasTrialMetadata;
@property (retain, nonatomic) SGMIMetricsTrialMetadata *trialMetadata;
@property (readonly, nonatomic) BOOL hasLocale;
@property (retain, nonatomic) NSString *locale;
@property (retain, nonatomic) NSMutableArray *stats;
@property (nonatomic) BOOL hasTotalNumberOfEmailsProcessedForAttachmentDetectionRoundedToClosestMultipleOf20;
@property (nonatomic) unsigned int totalNumberOfEmailsProcessedForAttachmentDetectionRoundedToClosestMultipleOf20;
@property (nonatomic) BOOL hasTotalNumberOfEmailsProcessedForRecipientDetectionRoundedToClosestMultipleOf20;
@property (nonatomic) unsigned int totalNumberOfEmailsProcessedForRecipientDetectionRoundedToClosestMultipleOf20;
@property (nonatomic) BOOL hasTotalNumberOfEmailsProcessedForFollowUpDetectionRoundedToClosestMultipleOf20;
@property (nonatomic) unsigned int totalNumberOfEmailsProcessedForFollowUpDetectionRoundedToClosestMultipleOf20;
@property (nonatomic) BOOL hasNumberOfPredictedAttachmentOnLargeIncomingMailsWithAttachmentRoundedToClosestMultipleOf20;
@property (nonatomic) unsigned int numberOfPredictedAttachmentOnLargeIncomingMailsWithAttachmentRoundedToClosestMultipleOf20;
@property (nonatomic) BOOL hasNumberOfLargeIncomingMailsWithAttachmentRoundedToClosestMultipleOf20;
@property (nonatomic) unsigned int numberOfLargeIncomingMailsWithAttachmentRoundedToClosestMultipleOf20;
@property (nonatomic) BOOL hasNumberOfPredictedAttachmentOnLargeOutgoingMailsWithAttachmentRoundedToClosestMultipleOf20;
@property (nonatomic) unsigned int numberOfPredictedAttachmentOnLargeOutgoingMailsWithAttachmentRoundedToClosestMultipleOf20;
@property (nonatomic) BOOL hasNumberOfLargeOutgoingMailsWithAttachmentRoundedToClosestMultipleOf20;
@property (nonatomic) unsigned int numberOfLargeOutgoingMailsWithAttachmentRoundedToClosestMultipleOf20;

+ (Class)statsType;

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
- (void)addStats:(id)a0;
- (void)clearStats;
- (id)statsAtIndex:(unsigned long long)a0;
- (unsigned long long)statsCount;

@end
