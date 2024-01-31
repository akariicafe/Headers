@interface NewsPersonalization.EventHistoryAggregateStoreStateModeResolver : NSObject <FCPersonalizationDataGeneratorType, FCReadonlyAggregateStoreProviderType, FCPersonalizationDataGeneratorType, FCReadonlyAggregateStoreProviderType> {
    void /* unknown type, empty encoding */ personalizationData;
    void /* unknown type, empty encoding */ userEventHistoryAggregateStoreFactory;
    void /* unknown type, empty encoding */ mode;
}

- (id)generateDerivedData;
- (id)aggregateStore;
- (id)init;
- (void).cxx_destruct;

@end
