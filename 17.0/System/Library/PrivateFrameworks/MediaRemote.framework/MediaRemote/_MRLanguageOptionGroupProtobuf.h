@class NSMutableArray, _MRLanguageOptionProtobuf;

@interface _MRLanguageOptionGroupProtobuf : PBCodable <NSCopying> {
    struct { unsigned char allowEmptySelection : 1; } _has;
}

@property (nonatomic) BOOL hasAllowEmptySelection;
@property (nonatomic) BOOL allowEmptySelection;
@property (readonly, nonatomic) BOOL hasDefaultLanguageOption;
@property (retain, nonatomic) _MRLanguageOptionProtobuf *defaultLanguageOption;
@property (retain, nonatomic) NSMutableArray *languageOptions;

+ (Class)languageOptionsType;

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
- (void)addLanguageOptions:(id)a0;
- (void)clearLanguageOptions;
- (id)languageOptionsAtIndex:(unsigned long long)a0;
- (unsigned long long)languageOptionsCount;

@end
