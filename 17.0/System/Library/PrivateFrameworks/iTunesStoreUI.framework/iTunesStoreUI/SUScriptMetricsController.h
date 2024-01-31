@class NSString, SSMetricsController;

@interface SUScriptMetricsController : SUScriptObject <ISURLBagObserver> {
    SSMetricsController *_metricsController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)a0;
+ (id)webScriptNameForKeyName:(id)a0;

- (id)init;
- (void)dealloc;
- (id)_className;
- (id)attributeKeys;
- (id)scriptAttributeKeys;
- (void)bagDidChange:(id)a0;
- (void)_configureWithBagDictionary:(id)a0;
- (void)flushUnreportedEventsWithCompletionFunction:(id)a0;
- (void)recordEventWithTopic:(id)a0 properties:(id)a1 completionFunction:(id)a2;

@end
