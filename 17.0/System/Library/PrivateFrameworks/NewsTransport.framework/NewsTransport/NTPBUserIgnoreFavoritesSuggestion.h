@class NSString;

@interface NTPBUserIgnoreFavoritesSuggestion : PBCodable <NSCopying> {
    struct { unsigned char ignoreLocation : 1; unsigned char ignoredFeedType : 1; unsigned char suggestionPositionWhenIgnored : 1; } _has;
}

@property (nonatomic) BOOL hasIgnoredFeedType;
@property (nonatomic) int ignoredFeedType;
@property (nonatomic) BOOL hasIgnoreLocation;
@property (nonatomic) int ignoreLocation;
@property (readonly, nonatomic) BOOL hasIgnoredFeedId;
@property (retain, nonatomic) NSString *ignoredFeedId;
@property (nonatomic) BOOL hasSuggestionPositionWhenIgnored;
@property (nonatomic) int suggestionPositionWhenIgnored;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
