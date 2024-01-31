@class NSString;

@interface MapsSuggestionsCalendarEventDeduper : MapsSuggestionsBaseDeduper <MapsSuggestionsDeduper>

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isEnabled;

- (BOOL)dedupeByEnrichingEntry:(id)a0 withEntry:(id)a1;

@end
