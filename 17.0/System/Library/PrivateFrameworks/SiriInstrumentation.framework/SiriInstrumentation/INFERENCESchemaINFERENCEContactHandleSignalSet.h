@class INFERENCESchemaINFERENCEPrivatizedHistoryStats, NSData;

@interface INFERENCESchemaINFERENCEContactHandleSignalSet : SISchemaInstrumentationMessage {
    struct { unsigned char isSuggestedHandle : 1; unsigned char isFavorite : 1; unsigned char isQueryExactMatch : 1; unsigned char isQueryMatch : 1; unsigned char isPartialQueryValueMatch : 1; unsigned char isRecentInAnyGroup : 1; unsigned char isRecentInSameGroup : 1; unsigned char isPreferredType : 1; unsigned char isAllowedType : 1; unsigned char isFaceTimeable : 1; unsigned char isNotFaceTimeable : 1; } _has;
}

@property (nonatomic) BOOL isSuggestedHandle;
@property (nonatomic) BOOL hasIsSuggestedHandle;
@property (nonatomic) BOOL isFavorite;
@property (nonatomic) BOOL hasIsFavorite;
@property (nonatomic) BOOL isQueryExactMatch;
@property (nonatomic) BOOL hasIsQueryExactMatch;
@property (nonatomic) BOOL isQueryMatch;
@property (nonatomic) BOOL hasIsQueryMatch;
@property (nonatomic) BOOL isPartialQueryValueMatch;
@property (nonatomic) BOOL hasIsPartialQueryValueMatch;
@property (retain, nonatomic) INFERENCESchemaINFERENCEPrivatizedHistoryStats *historyStats;
@property (nonatomic) BOOL hasHistoryStats;
@property (nonatomic) BOOL isRecentInAnyGroup;
@property (nonatomic) BOOL hasIsRecentInAnyGroup;
@property (nonatomic) BOOL isRecentInSameGroup;
@property (nonatomic) BOOL hasIsRecentInSameGroup;
@property (nonatomic) BOOL isPreferredType;
@property (nonatomic) BOOL hasIsPreferredType;
@property (nonatomic) BOOL isAllowedType;
@property (nonatomic) BOOL hasIsAllowedType;
@property (nonatomic) BOOL isFaceTimeable;
@property (nonatomic) BOOL hasIsFaceTimeable;
@property (nonatomic) BOOL isNotFaceTimeable;
@property (nonatomic) BOOL hasIsNotFaceTimeable;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteHistoryStats;
- (void)deleteIsAllowedType;
- (void)deleteIsFaceTimeable;
- (void)deleteIsFavorite;
- (void)deleteIsNotFaceTimeable;
- (void)deleteIsPartialQueryValueMatch;
- (void)deleteIsPreferredType;
- (void)deleteIsQueryExactMatch;
- (void)deleteIsQueryMatch;
- (void)deleteIsRecentInAnyGroup;
- (void)deleteIsRecentInSameGroup;
- (void)deleteIsSuggestedHandle;

@end
