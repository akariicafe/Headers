@class GEORPFeedbackTdmFraudNotificationResult, GEORPFeedbackIdLookupResult, GEORPFeedbackImageUploadResult, GEORPFeedbackLogEventResult, PBDataReader, GEORPFeedbackLayoutConfigResult, PBUnknownFields, GEORPFeedbackSubmissionResult, GEORPFeedbackQueryResult;

@interface GEORPFeedbackResult : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEORPFeedbackIdLookupResult *_idLookupResult;
    GEORPFeedbackImageUploadResult *_imageUploadResult;
    GEORPFeedbackLayoutConfigResult *_layoutConfigResult;
    GEORPFeedbackLogEventResult *_logEventResult;
    GEORPFeedbackQueryResult *_queryResult;
    GEORPFeedbackSubmissionResult *_submissionResult;
    GEORPFeedbackTdmFraudNotificationResult *_tdmFraudNotificationResult;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_idLookupResult : 1; unsigned char read_imageUploadResult : 1; unsigned char read_layoutConfigResult : 1; unsigned char read_logEventResult : 1; unsigned char read_queryResult : 1; unsigned char read_submissionResult : 1; unsigned char read_tdmFraudNotificationResult : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasSubmissionResult;
@property (retain, nonatomic) GEORPFeedbackSubmissionResult *submissionResult;
@property (readonly, nonatomic) BOOL hasIdLookupResult;
@property (retain, nonatomic) GEORPFeedbackIdLookupResult *idLookupResult;
@property (readonly, nonatomic) BOOL hasQueryResult;
@property (retain, nonatomic) GEORPFeedbackQueryResult *queryResult;
@property (readonly, nonatomic) BOOL hasImageUploadResult;
@property (retain, nonatomic) GEORPFeedbackImageUploadResult *imageUploadResult;
@property (readonly, nonatomic) BOOL hasLayoutConfigResult;
@property (retain, nonatomic) GEORPFeedbackLayoutConfigResult *layoutConfigResult;
@property (readonly, nonatomic) BOOL hasTdmFraudNotificationResult;
@property (retain, nonatomic) GEORPFeedbackTdmFraudNotificationResult *tdmFraudNotificationResult;
@property (readonly, nonatomic) BOOL hasLogEventResult;
@property (retain, nonatomic) GEORPFeedbackLogEventResult *logEventResult;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void)clearUnknownFields:(BOOL)a0;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithJSON:(id)a0;

@end
