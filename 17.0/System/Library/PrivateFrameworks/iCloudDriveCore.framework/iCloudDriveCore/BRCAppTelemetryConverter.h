@class NSArray, NSDictionary;

@interface BRCAppTelemetryConverter : NSObject {
    NSArray *_investigationKeysToRemove;
    NSDictionary *_oldToNewKeys;
}

- (id)init;
- (void).cxx_destruct;
- (void)_fixupEventDataWithEvent:(id)a0;
- (void)_payloadFromEventDictionary:(id)a0 dictionary:(id)a1;
- (id)dictionaryRepresentationFromEvent:(id)a0;
- (id)fixupValue:(id)a0 forKey:(id)a1;

@end
