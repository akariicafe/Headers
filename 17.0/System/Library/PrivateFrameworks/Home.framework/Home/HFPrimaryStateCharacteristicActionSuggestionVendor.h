@class NSString;

@interface HFPrimaryStateCharacteristicActionSuggestionVendor : NSObject <HFCharacteristicActionSuggestionVending>

@property (readonly, nonatomic) id normalStateValue;
@property (readonly, nonatomic) unsigned long long bucketingPolicy;
@property (readonly, copy, nonatomic) NSString *characteristicType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_bucketingValueForAction:(id)a0;
- (id)initWithCharacteristicType:(id)a0 normalStateValue:(id)a1;
- (id)initWithCharacteristicType:(id)a0 normalStateValue:(id)a1 bucketingPolicy:(unsigned long long)a2;
- (id)suggestedActionForCharacteristic:(id)a0 candidateActions:(id)a1;

@end
