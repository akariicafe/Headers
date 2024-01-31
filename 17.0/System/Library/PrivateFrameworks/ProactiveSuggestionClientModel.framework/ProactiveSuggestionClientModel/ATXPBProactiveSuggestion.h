@class ATXPBProactiveSuggestionScoreSpecification, ATXPBProactiveSuggestionUISpecification, NSString, ATXPBProactiveSuggestionClientModelSpecification, ATXPBProactiveSuggestionExecutableSpecification;

@interface ATXPBProactiveSuggestion : PBCodable <NSCopying> {
    ATXPBProactiveSuggestionClientModelSpecification *_clientModelSpecification;
    ATXPBProactiveSuggestionExecutableSpecification *_executableSpecification;
    ATXPBProactiveSuggestionScoreSpecification *_scoreSpecification;
    ATXPBProactiveSuggestionUISpecification *_uiSpecification;
    NSString *_uuidString;
}

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
