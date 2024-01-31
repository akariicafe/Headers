@class HFHomeKitSettingsValueManager, NAIdentity, NSString;
@protocol HFMediaProfileContainer;

@interface HFHomePodTimerControlItem : HFControlItem <NAIdentifiable>

@property (class, readonly, nonatomic) NAIdentity *na_identity;

@property (readonly, nonatomic) HFHomeKitSettingsValueManager *valueManager;
@property (readonly, nonatomic) id<HFMediaProfileContainer> mediaProfileContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)valueClass;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)characteristicValuesForValue:(id)a0;
- (id)initWithMediaProfileContainer:(id)a0 displayResults:(id)a1;
- (id)normalizedValueForValue:(id)a0;
- (id)copyWithCharacteristicOptions:(id)a0 valueSource:(id)a1;
- (id)initWithValueSource:(id)a0 characteristicOptions:(id)a1 displayResults:(id)a2;
- (id)readValueAndPopulateStandardResults;
- (id)resultsForBatchReadResponse:(id)a0;
- (id)valueForCharacteristicValues:(id)a0;

@end
