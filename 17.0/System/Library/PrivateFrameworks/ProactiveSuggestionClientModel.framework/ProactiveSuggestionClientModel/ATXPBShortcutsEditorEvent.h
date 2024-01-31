@class NSString, NSMutableArray, ATXPBShortcutsEditorEventMetadata;

@interface ATXPBShortcutsEditorEvent : PBCodable <NSCopying> {
    struct { unsigned char date : 1; unsigned char eventType : 1; } _has;
}

@property (nonatomic) BOOL hasDate;
@property (nonatomic) double date;
@property (nonatomic) BOOL hasEventType;
@property (nonatomic) unsigned long long eventType;
@property (readonly, nonatomic) BOOL hasBlendingCacheId;
@property (retain, nonatomic) NSString *blendingCacheId;
@property (retain, nonatomic) NSMutableArray *suggestionUUIDs;
@property (readonly, nonatomic) BOOL hasMetadata;
@property (retain, nonatomic) ATXPBShortcutsEditorEventMetadata *metadata;

+ (Class)suggestionUUIDsType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)clearSuggestionUUIDs;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)suggestionUUIDsCount;
- (void)addSuggestionUUIDs:(id)a0;
- (id)suggestionUUIDsAtIndex:(unsigned long long)a0;

@end
