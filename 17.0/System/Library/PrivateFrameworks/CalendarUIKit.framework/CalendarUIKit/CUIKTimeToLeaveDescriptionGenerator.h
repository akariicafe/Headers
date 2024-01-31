@interface CUIKTimeToLeaveDescriptionGenerator : NSObject

+ (id)travelAdvisoryDescriptionOfType:(unsigned long long)a0 hypothesis:(id)a1 location:(id)a2;
+ (id)_attributedEtaString:(double)a0 fontName:(id)a1 fontSize:(double)a2;
+ (id)_etaString:(double)a0;
+ (id)_travelAdvisoryDescriptionOfType:(unsigned long long)a0 hypothesis:(id)a1 eta:(id)a2 location:(id)a3;
+ (id)_travelTimeDrivingStringExcludingTrafficWithHypothesis:(id)a0 eta:(id)a1 location:(id)a2;
+ (id)_travelTimeDrivingStringIncludingTrafficWithHypothesis:(id)a0 eta:(id)a1 location:(id)a2;
+ (id)_travelTimeDrivingStringWithHypothesis:(id)a0 eta:(id)a1 location:(id)a2;
+ (id)_travelTimeDrivingSubstringWithEta:(id)a0 location:(id)a1 includeTransportType:(BOOL)a2;
+ (id)_travelTimeDrivingSubstringWithEta:(id)a0 location:(id)a1 routeName:(id)a2 includeTransportType:(BOOL)a3;
+ (id)_travelTimeLeaveNowDrivingStringExcludingTrafficWithHypothesis:(id)a0 eta:(id)a1 location:(id)a2;
+ (id)_travelTimeLeaveNowDrivingStringIncludingTrafficWithHypothesis:(id)a0 eta:(id)a1 location:(id)a2;
+ (id)_travelTimeLeaveNowDrivingStringWithHypothesis:(id)a0 eta:(id)a1 location:(id)a2;
+ (id)_travelTimeLeaveNowDrivingSubstringWithEta:(id)a0 location:(id)a1 includeTransportType:(BOOL)a2;
+ (id)_travelTimeLeaveNowDrivingSubstringWithEta:(id)a0 location:(id)a1 routeName:(id)a2 includeTransportType:(BOOL)a3;
+ (id)_travelTimeLeaveNowTransitStringWithEta:(id)a0 location:(id)a1;
+ (id)_travelTimeLeaveNowTransitStringWithLocation:(id)a0;
+ (id)_travelTimeLeaveNowWalkingStringWithEta:(id)a0 location:(id)a1;
+ (id)_travelTimeLeaveNowWalkingStringWithHypothesis:(id)a0 eta:(id)a1 location:(id)a2;
+ (id)_travelTimeOnTimeDrivingStringWithEta:(id)a0;
+ (id)_travelTimeOnTimeTransitStringWithEta:(id)a0;
+ (id)_travelTimeOnTimeWalkingStringWithEta:(id)a0;
+ (id)_travelTimeRunningLateTransitStringWithEta:(id)a0 location:(id)a1;
+ (id)_travelTimeStringWithHypothesis:(id)a0 eta:(id)a1 location:(id)a2;
+ (id)_travelTimeWalkingStringWithEta:(id)a0 location:(id)a1;
+ (id)_travelTimeWalkingStringWithHypothesis:(id)a0 eta:(id)a1 location:(id)a2;
+ (id)departureDateString:(id)a0;
+ (id)explanatoryTextForTTLStatus:(unsigned long long)a0;
+ (id)timeToLeaveAttributedStringWithAttributes:(id)a0 hypothesis:(id)a1 location:(id)a2;
+ (id)timeToLeaveStringWithEta:(double)a0 transportType:(int)a1 runningLate:(BOOL)a2;
+ (id)timeToLeaveStringWithHypothesis:(id)a0 eta:(id)a1 location:(id)a2;
+ (id)timeToLeaveStringWithHypothesis:(id)a0 location:(id)a1;
+ (id)travelTimeApproachingDepartureDateStringWithHypothesis:(id)a0 eta:(id)a1 location:(id)a2;
+ (id)travelTimeApproachingDepartureDateTransitStringWithDepartureDate:(id)a0 location:(id)a1;
+ (id)travelTimeLeaveNowStringWithHypothesis:(id)a0 eta:(id)a1 location:(id)a2;
+ (id)travelTimeRunningLateStringWithHypothesis:(id)a0 eta:(id)a1 location:(id)a2;

@end
