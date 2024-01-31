@class NSMutableDictionary;

@interface CADStatsPreferences : CADStatCollector {
    NSMutableDictionary *payload;
}

+ (id)eventName;

- (id)init;
- (id)eventDictionaries;
- (void).cxx_destruct;

@end
