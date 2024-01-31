@class BMEventBase;

@interface SearchUIBiomeEvent : BMEventBase <SearchUIBiomeBoolEvent>

@property (retain, nonatomic) BMEventBase *biomeEvent;

+ (BOOL)supportsEvent:(id)a0 contextualAction:(id)a1;
+ (id)eventForEvent:(id)a0 contextualActon:(id)a1;

- (void).cxx_destruct;
- (void)getEnabledStatusWithCompletion:(id /* block */)a0;
- (id)initWithEvent:(id)a0 contextualActon:(id)a1;

@end
