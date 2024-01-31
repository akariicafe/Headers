@class NSString, NSMutableArray;

@interface ATXPBActivity : PBCodable <NSCopying> {
    unsigned long long _origin;
    unsigned long long _uiLocation;
    NSString *_modeUUID;
    NSString *_originAnchorType;
    NSString *_originBundleId;
    NSMutableArray *_serializedTriggers;
    NSString *_suggestionUUID;
    int _type;
    BOOL _shouldSuggestTriggers;
    struct { unsigned char origin : 1; unsigned char uiLocation : 1; unsigned char type : 1; unsigned char shouldSuggestTriggers : 1; } _has;
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
