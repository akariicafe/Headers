@class ATXPBRequestForIntentSuggestions, NSString, NSData, ATXPBRequestForInteractionSuggestions, NSMutableArray, ATXPBRequestForContextualActionSuggestions;

@interface ATXPBResponseForRequestForSuggestions : PBCodable <NSCopying> {
    struct { unsigned char responseCode : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasUuidString;
@property (retain, nonatomic) NSString *uuidString;
@property (retain, nonatomic) NSMutableArray *suggestions;
@property (readonly, nonatomic) BOOL hasFeedbackMetadata;
@property (retain, nonatomic) NSData *feedbackMetadata;
@property (nonatomic) BOOL hasResponseCode;
@property (nonatomic) int responseCode;
@property (readonly, nonatomic) BOOL hasErrorData;
@property (retain, nonatomic) NSData *errorData;
@property (readonly, nonatomic) BOOL hasInteractionSuggestionRequest;
@property (retain, nonatomic) ATXPBRequestForInteractionSuggestions *interactionSuggestionRequest;
@property (readonly, nonatomic) BOOL hasContextualActionSuggestionRequest;
@property (retain, nonatomic) ATXPBRequestForContextualActionSuggestions *contextualActionSuggestionRequest;
@property (readonly, nonatomic) BOOL hasIntentSuggestionRequest;
@property (retain, nonatomic) ATXPBRequestForIntentSuggestions *intentSuggestionRequest;

+ (Class)suggestionsType;

- (unsigned long long)hash;
- (void)clearSuggestions;
- (BOOL)readFrom:(id)a0;
- (void)addSuggestions:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)suggestionsAtIndex:(unsigned long long)a0;
- (unsigned long long)suggestionsCount;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsResponseCode:(id)a0;
- (id)responseCodeAsString:(int)a0;

@end
