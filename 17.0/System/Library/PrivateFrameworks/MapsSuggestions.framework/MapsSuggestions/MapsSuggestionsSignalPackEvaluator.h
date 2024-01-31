@class MapsSuggestionsSignalPack;

@interface MapsSuggestionsSignalPackEvaluator : NSObject {
    MapsSuggestionsSignalPack *_signalPack;
}

+ (id)evaluatorFromSignalPack:(id)a0;

- (BOOL)hasCarPlayInfo;
- (BOOL)hasTouristInfo;
- (BOOL)hasDistanceFromOriginToDestinationInfo;
- (BOOL)hasMapTypeInfo;
- (BOOL)hasSignalForHasATransitCard;
- (BOOL)hasWeatherTemperatureInfo;
- (BOOL)isUserPreferenceRidesharing;
- (BOOL)hasWeatherInfo;
- (BOOL)hasSignalForPaymentCard;
- (id)initWithSignalPack:(id)a0;
- (BOOL)isTransitCurrentlyPossible;
- (double)isTransitUserHereConfidence;
- (BOOL)hasUserTransportTypePreferenceInfo;
- (BOOL)isEasilyWalkable;
- (BOOL)isBadWeather;
- (BOOL)hasWeatherPrecipitationInfo;
- (BOOL)hasTransitInfo;
- (BOOL)isLowChanceOfRaining;
- (BOOL)isUserPreferenceWalking;
- (BOOL)isMapTypeTransit;
- (BOOL)isHotWeather;
- (BOOL)userHasAPaymentCard;
- (BOOL)hasSignalForExpressPaymentCard;
- (BOOL)userHasAnUpcomingTrip;
- (BOOL)hasRidesharingInfo;
- (BOOL)isUserPreferenceDriving;
- (BOOL)hasSignalForIsCurrentlyInATrip;
- (BOOL)isCarPlayConnected;
- (void).cxx_destruct;
- (BOOL)isRideSharingAppsInstalled;
- (BOOL)userIsCurrentlyInATrip;
- (BOOL)isHighChanceOfSnowing;
- (double)isTransitUserConfidence;
- (BOOL)isWalkable;
- (BOOL)isUserPreferenceTransit;
- (BOOL)isLowChanceOfSnowing;
- (BOOL)userHasATransitCard;
- (BOOL)hasDistanceFromHereToOriginInfo;
- (BOOL)isTouristHere;
- (BOOL)isHighChanceOfRaining;
- (BOOL)isMildWeather;
- (BOOL)userHasAnExpressPaymentCard;
- (BOOL)hasDistanceFromHereToDestinationInfo;
- (BOOL)isColdWeather;
- (BOOL)hasSignalForUpcomingTrip;

@end
