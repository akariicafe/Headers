@class NSString;

@interface IRRuleCandidate : IRRule

@property (retain, nonatomic) NSString *attributeKey;
@property (nonatomic) BOOL requireAllNodes;

- (void).cxx_destruct;
- (id)_activeRouteForCandidate:(id)a0 systemState:(id)a1;
- (id)_appleTVControlUserRejectedInLastDayWithoutPickerChoiceForCandidate:(id)a0 prerequisite:(id)a1;
- (id)_attributeValueForAttributeKey:(id)a0 prerequisite:(id)a1 withCandidate:(id)a2 nearbyDeviceContainer:(id)a3 systemState:(id)a4 date:(id)a5;
- (BOOL)_isCandidateIdentifier:(id)a0 inHistory:(id)a1;
- (BOOL)_isLastEventForCandidate:(id)a0 inPrerequisite:(id)a1 isOneOf:(id)a2;
- (id)_matchedDevicefromNode:(id)a0 withNearbyDeviceContainer:(id)a1 measurementExpiry:(id)a2 isUwb:(BOOL)a3;
- (id)_mediaUserRejectedInLastDayWithoutPickerChoiceForCandidate:(id)a0 prerequisite:(id)a1;
- (id)_prerequisiteValueForAttributeKey:(id)a0 withCandidatesContainer:(id)a1 nearbyDeviceContainer:(id)a2 systemState:(id)a3 historyContainer:(id)a4 date:(id)a5;
- (BOOL)_proximityBLEValueForCandidate:(id)a0 withNearbyDeviceContainer:(id)a1 date:(id)a2;
- (BOOL)_proximityDecisionForCandidate:(id)a0 withNearbyDeviceContainer:(id)a1 date:(id)a2;
- (id)_proximityLowestUwbRangeForCandidate:(id)a0 withNearbyDeviceContainer:(id)a1 date:(id)a2;
- (id)_proximityPrerequisiteValueForCandidatesContainer:(id)a0 withNearbyDeviceContainer:(id)a1 date:(id)a2;
- (id)_proximityShortestRangeInHistoryOrSameICloudValueForCandidate:(id)a0 withNearbyDeviceContainer:(id)a1 prerequisite:(id)a2 date:(id)a3;
- (id)_proximityShortestRangeValueForCandidate:(id)a0 withNearbyDeviceContainer:(id)a1 prerequisite:(id)a2 date:(id)a3;
- (id)_proximityValueForCandidate:(id)a0 withNearbyDeviceContainer:(id)a1 prerequisite:(id)a2 date:(id)a3;
- (id)_sameIcloudForCandidate:(id)a0 systemState:(id)a1;
- (id)_sameWiFiForCandidate:(id)a0 systemState:(id)a1;
- (id)_shortestRangeProximityPrerequisiteValueForCandidatesContainer:(id)a0 withNearbyDeviceContainer:(id)a1 date:(id)a2;
- (id)_shortestRangeWithHistoryOrSameICloudProximityPrerequisiteValueForCandidatesContainer:(id)a0 withNearbyDeviceContainer:(id)a1 historyContainer:(id)a2 systemState:(id)a3 date:(id)a4;
- (id)_userRejectedInLastDayWithoutPickerChoicePrerequisiteValueForHistoryContainer:(id)a0 systemState:(id)a1 date:(id)a2;
- (id)_valueFromValues:(id)a0;
- (id)executeRuleWithCandiatesContainer:(id)a0 systemStatus:(id)a1 historyContainer:(id)a2 miloPrediction:(id)a3 nearbyDeviceContainer:(id)a4 date:(id)a5;
- (id)initWithAttributeKey:(id)a0 requireAllNodes:(BOOL)a1;

@end
