@class NSString, NSArray, NSMapTable, BMBehaviorRetriever;

@interface RECoreBehaviorPredictor : REPredictor <REPredictorObserver> {
    BMBehaviorRetriever *_retriever;
    NSArray *_rules;
    NSMapTable *_locations;
    unsigned long long _dayValue;
    unsigned long long _hourValue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)updateInterval;
+ (id)supportedFeatures;

- (void)pause;
- (id)_init;
- (void)update;
- (void)resume;
- (void).cxx_destruct;
- (id)_bmtypeForShortcutType:(unsigned long long)a0 filterLevel:(unsigned long long)a1;
- (id)_retrieveFeatureValueForItemType:(id)a0 shortcutIdentifier:(id)a1 antecedentType:(id)a2 antecedentValue:(id)a3;
- (id)featureValueForFeature:(id)a0 element:(id)a1 engine:(id)a2 trainingContext:(id)a3;
- (void)predictorDidUpdate:(id)a0;

@end
