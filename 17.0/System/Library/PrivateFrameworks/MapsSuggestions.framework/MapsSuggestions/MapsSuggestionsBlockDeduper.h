@class NSString;

@interface MapsSuggestionsBlockDeduper : MapsSuggestionsBaseDeduper <MapsSuggestionsDeduper> {
    id /* block */ _block;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isEnabled;
+ (id)deduperWithBlock:(id /* block */)a0;

- (id)initWithBlock:(id /* block */)a0;
- (BOOL)dedupeByEnrichingEntry:(id)a0 withEntry:(id)a1;
- (void).cxx_destruct;

@end
