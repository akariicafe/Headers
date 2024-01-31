@class NSString, NAIdentity;
@protocol HFAggregatedCharacteristicValueSource;

@interface HFCharacteristicStateItem : HFItem <NAIdentifiable>

@property (class, readonly, nonatomic) NAIdentity *na_identity;

@property (readonly, copy, nonatomic) id /* block */ resultsProvider;
@property (readonly, copy, nonatomic) NSString *characteristicType;
@property (readonly, nonatomic) id<HFAggregatedCharacteristicValueSource> valueSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)initWithCharacteristicType:(id)a0 valueSource:(id)a1 resultsProvider:(id /* block */)a2;

@end
