@class NSString;

@interface CADStatsCallback : CADStatCollector {
    NSString *_eventName;
    id /* block */ _callback;
}

- (id)eventName;
- (id)eventDictionaries;
- (void).cxx_destruct;
- (id)initWithEventName:(id)a0 callback:(id /* block */)a1;

@end
