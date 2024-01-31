@class NSString;

@interface MapsSuggestionsGEOMapItemDeduper : MapsSuggestionsBaseDeduper <MapsSuggestionsDeduper> {
    long long _type;
    NSString *_name;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isEnabled;

- (id)initWithSacrificedType:(long long)a0;
- (BOOL)dedupeByEnrichingEntry:(id)a0 withEntry:(id)a1;
- (void).cxx_destruct;

@end
