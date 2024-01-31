@class ATXPBProactiveSuggestionGroupedUIFeedbackResult;

@interface ATXPBContextualActionsGroupedUIFeedbackResult : PBCodable <NSCopying> {
    struct { unsigned char numManuallyAddedSteps : 1; unsigned char numShortcutsAtEnd : 1; unsigned char numShortcutsAtStart : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasGroupedUIFeedbackResults;
@property (retain, nonatomic) ATXPBProactiveSuggestionGroupedUIFeedbackResult *groupedUIFeedbackResults;
@property (nonatomic) BOOL hasNumShortcutsAtStart;
@property (nonatomic) unsigned long long numShortcutsAtStart;
@property (nonatomic) BOOL hasNumShortcutsAtEnd;
@property (nonatomic) unsigned long long numShortcutsAtEnd;
@property (nonatomic) BOOL hasNumManuallyAddedSteps;
@property (nonatomic) unsigned long long numManuallyAddedSteps;

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
