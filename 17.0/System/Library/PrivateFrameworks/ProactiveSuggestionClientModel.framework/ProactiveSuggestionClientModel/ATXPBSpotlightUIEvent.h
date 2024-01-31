@class NSString;

@interface ATXPBSpotlightUIEvent : PBCodable <NSCopying> {
    struct { unsigned char eventType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasSuggestionUniqueId;
@property (retain, nonatomic) NSString *suggestionUniqueId;
@property (readonly, nonatomic) BOOL hasSuggestionType;
@property (retain, nonatomic) NSString *suggestionType;
@property (readonly, nonatomic) BOOL hasSuggestionSubtype;
@property (retain, nonatomic) NSString *suggestionSubtype;
@property (readonly, nonatomic) BOOL hasSuggestionContext;
@property (retain, nonatomic) NSString *suggestionContext;
@property (nonatomic) BOOL hasEventType;
@property (nonatomic) long long eventType;

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
