@class GEOPDSearchTokenSet;

@interface GEOPDSearchSpellSuggestion : PBCodable <NSCopying> {
    double _score;
    GEOPDSearchTokenSet *_suggestion;
    unsigned int _editDistance;
    float _rawScore;
    struct { unsigned char has_score : 1; unsigned char has_editDistance : 1; unsigned char has_rawScore : 1; } _flags;
}

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
