@class NSArray, NSString;

@interface _INPBIntentSlotVocabularyPolicy : PBCodable <_INPBIntentSlotVocabularyPolicy, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *intentSlotNames;
@property (readonly, nonatomic) unsigned long long intentSlotNamesCount;
@property (copy, nonatomic) NSArray *intentSlotVocabularyConcepts;
@property (readonly, nonatomic) unsigned long long intentSlotVocabularyConceptsCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)intentSlotVocabularyConceptsType;

- (BOOL)readFrom:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addIntentSlotNames:(id)a0;
- (void)addIntentSlotVocabularyConcepts:(id)a0;
- (void)clearIntentSlotNames;
- (void)clearIntentSlotVocabularyConcepts;
- (id)intentSlotNamesAtIndex:(unsigned long long)a0;
- (id)intentSlotVocabularyConceptsAtIndex:(unsigned long long)a0;

@end
