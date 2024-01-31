@class ATXPBActivity, NSMutableArray;

@interface ATXPBActivitySuggestionFeedbackEvent : PBCodable <NSCopying> {
    double _date;
    ATXPBActivity *_activity;
    int _eventType;
    int _location;
    NSMutableArray *_serializedAcceptedTriggers;
    int _suggestionType;
    struct { unsigned char date : 1; unsigned char eventType : 1; unsigned char location : 1; unsigned char suggestionType : 1; } _has;
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
