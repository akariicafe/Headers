@class NSString, NSMutableArray;

@interface ATXPBHomeScreenCachedSuggestion : PBCodable <NSCopying> {
    NSMutableArray *_cachedAppPredictionPanelIds;
    NSMutableArray *_cachedAppPredictionPanelLayouts;
    NSMutableArray *_cachedSuggestedWidgetLayoutListKeys;
    NSMutableArray *_cachedSuggestedWidgetLayoutLists;
    NSMutableArray *_cachedSuggestionWidgetIds;
    NSMutableArray *_cachedSuggestionWidgetLayouts;
    NSMutableArray *_cachedTopOfStackLayoutKeys;
    NSMutableArray *_cachedTopOfStackLayouts;
    NSMutableArray *_fallbackSuggestions;
    NSString *_uuidString;
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
