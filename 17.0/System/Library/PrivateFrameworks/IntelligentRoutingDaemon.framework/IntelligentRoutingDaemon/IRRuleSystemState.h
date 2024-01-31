@class NSString;

@interface IRRuleSystemState : IRRule {
    NSString *_attributeKey;
}

- (void).cxx_destruct;
- (id)_attributeValueForAttributeKey:(id)a0 systemState:(id)a1 miloPrediction:(id)a2;
- (id)_headsetRoutedOrAirPodsPredictedToBeRoutedForSystemState:(id)a0;
- (id)executeRuleWithCandiatesContainer:(id)a0 systemStatus:(id)a1 historyContainer:(id)a2 miloPrediction:(id)a3 nearbyDeviceContainer:(id)a4 date:(id)a5;
- (id)initWithAttributeKey:(id)a0;

@end
