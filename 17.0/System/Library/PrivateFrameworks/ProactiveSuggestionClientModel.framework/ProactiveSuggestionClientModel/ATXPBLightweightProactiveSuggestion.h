@class NSString, ATXPBProactiveSuggestionScoreSpecification;

@interface ATXPBLightweightProactiveSuggestion : PBCodable <NSCopying> {
    struct { unsigned char predictionReasons : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasExecutableIdentifier;
@property (retain, nonatomic) NSString *executableIdentifier;
@property (readonly, nonatomic) BOOL hasExecutableType;
@property (retain, nonatomic) NSString *executableType;
@property (readonly, nonatomic) BOOL hasScoreSpecification;
@property (retain, nonatomic) ATXPBProactiveSuggestionScoreSpecification *scoreSpecification;
@property (nonatomic) BOOL hasPredictionReasons;
@property (nonatomic) unsigned long long predictionReasons;

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
