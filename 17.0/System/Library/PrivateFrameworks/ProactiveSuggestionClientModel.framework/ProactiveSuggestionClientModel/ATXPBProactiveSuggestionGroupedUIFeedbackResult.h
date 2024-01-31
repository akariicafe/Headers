@interface ATXPBProactiveSuggestionGroupedUIFeedbackResult : PBCodable <NSCopying> {
    struct { unsigned char endDateOfLastSessionInSeconds : 1; unsigned char numAbandonedSuggestions : 1; unsigned char numEngagedSuggestions : 1; unsigned char numRejectedSuggestions : 1; unsigned char numSessionsWithAbandonedSuggestions : 1; unsigned char numSessionsWithEngagedSuggestions : 1; unsigned char numSessionsWithRejectedSuggestions : 1; unsigned char startDateOfFirstSessionInSeconds : 1; unsigned char isComplete : 1; } _has;
}

@property (nonatomic) BOOL hasNumSessionsWithEngagedSuggestions;
@property (nonatomic) unsigned long long numSessionsWithEngagedSuggestions;
@property (nonatomic) BOOL hasNumSessionsWithRejectedSuggestions;
@property (nonatomic) unsigned long long numSessionsWithRejectedSuggestions;
@property (nonatomic) BOOL hasNumSessionsWithAbandonedSuggestions;
@property (nonatomic) unsigned long long numSessionsWithAbandonedSuggestions;
@property (nonatomic) BOOL hasNumEngagedSuggestions;
@property (nonatomic) unsigned long long numEngagedSuggestions;
@property (nonatomic) BOOL hasNumRejectedSuggestions;
@property (nonatomic) unsigned long long numRejectedSuggestions;
@property (nonatomic) BOOL hasNumAbandonedSuggestions;
@property (nonatomic) unsigned long long numAbandonedSuggestions;
@property (nonatomic) BOOL hasIsComplete;
@property (nonatomic) BOOL isComplete;
@property (nonatomic) BOOL hasStartDateOfFirstSessionInSeconds;
@property (nonatomic) double startDateOfFirstSessionInSeconds;
@property (nonatomic) BOOL hasEndDateOfLastSessionInSeconds;
@property (nonatomic) double endDateOfLastSessionInSeconds;

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
