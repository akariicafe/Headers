@class NSString;

@interface PSGPBQuery : PBCodable <NSCopying> {
    struct { unsigned char maxPredictionItems : 1; unsigned char maxStructuredInfoItems : 1; unsigned char maxTextualResponseItems : 1; unsigned char hasContextBeforeInput : 1; unsigned char hasRecipientNames : 1; unsigned char hasResponseContext : 1; unsigned char isDocumentEmpty : 1; unsigned char isResponseContextBlacklisted : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasExperimentId;
@property (retain, nonatomic) NSString *experimentId;
@property (readonly, nonatomic) BOOL hasTreatmentId;
@property (retain, nonatomic) NSString *treatmentId;
@property (readonly, nonatomic) BOOL hasTreatmentName;
@property (retain, nonatomic) NSString *treatmentName;
@property (nonatomic) BOOL hasHasResponseContext;
@property (nonatomic) BOOL hasResponseContext;
@property (nonatomic) BOOL hasIsResponseContextBlacklisted;
@property (nonatomic) BOOL isResponseContextBlacklisted;
@property (nonatomic) BOOL hasIsDocumentEmpty;
@property (nonatomic) BOOL isDocumentEmpty;
@property (readonly, nonatomic) BOOL hasTextContentType;
@property (retain, nonatomic) NSString *textContentType;
@property (nonatomic) BOOL hasHasContextBeforeInput;
@property (nonatomic) BOOL hasContextBeforeInput;
@property (nonatomic) BOOL hasHasRecipientNames;
@property (nonatomic) BOOL hasRecipientNames;
@property (readonly, nonatomic) BOOL hasLocaleIdentifier;
@property (retain, nonatomic) NSString *localeIdentifier;
@property (readonly, nonatomic) BOOL hasBundleIdentifier;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (nonatomic) BOOL hasMaxTextualResponseItems;
@property (nonatomic) unsigned int maxTextualResponseItems;
@property (nonatomic) BOOL hasMaxStructuredInfoItems;
@property (nonatomic) unsigned int maxStructuredInfoItems;
@property (nonatomic) BOOL hasMaxPredictionItems;
@property (nonatomic) unsigned int maxPredictionItems;
@property (readonly, nonatomic) BOOL hasInitiatingProcess;
@property (retain, nonatomic) NSString *initiatingProcess;

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
