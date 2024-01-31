@class NSString, NSMutableArray;

@interface ATXPBProactiveSuggestionUISpecification : PBCodable <NSCopying> {
    double _contextEndDate;
    double _contextStartDate;
    unsigned long long _predictionReasons;
    NSMutableArray *_preferredLayoutConfigs;
    NSString *_reason;
    NSString *_subtitle;
    NSString *_title;
    BOOL _allowedOnHomeScreen;
    BOOL _allowedOnLockscreen;
    BOOL _allowedOnSpotlight;
    BOOL _shouldClearOnEngagement;
    struct { unsigned char contextEndDate : 1; unsigned char contextStartDate : 1; unsigned char predictionReasons : 1; unsigned char allowedOnHomeScreen : 1; unsigned char allowedOnLockscreen : 1; unsigned char allowedOnSpotlight : 1; unsigned char shouldClearOnEngagement : 1; } _has;
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
