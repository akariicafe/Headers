@interface PGTripFeatureProcessor : NSObject {
    void /* unknown type, empty encoding */ processorHelper;
    void /* unknown type, empty encoding */ momentNodes;
    void /* unknown type, empty encoding */ graph;
    void /* unknown type, empty encoding */ tripDateInterval;
    void /* unknown type, empty encoding */ locationHelper;
    void /* unknown type, empty encoding */ scoresByLevel;
    void /* unknown type, empty encoding */ scoresByAOI;
    void /* unknown type, empty encoding */ scorePerMoment;
    void /* unknown type, empty encoding */ locationFrequency;
    void /* unknown type, empty encoding */ finalTripLocationScoreByLevel;
    void /* unknown type, empty encoding */ totalScoreAvailable;
    void /* unknown type, empty encoding */ highScoreCityNodes;
    void /* unknown type, empty encoding */ totalNumberOfAssets;
    void /* unknown type, empty encoding */ currentFrequentLocationNodes;
    void /* unknown type, empty encoding */ frequentStateLocationNodes;
    void /* unknown type, empty encoding */ currentTripLevel;
    void /* unknown type, empty encoding */ scoreModifierNamesMet;
    void /* unknown type, empty encoding */ currentError;
}

- (id)init;
- (void).cxx_destruct;
- (void)sendAnalyticsEvent;
- (id)finalScoreByLevelWithError:(id *)a0;
- (id)frequencyPerLocationWithError:(id *)a0;
- (id)getScorePerMoment;
- (id)getScoresByLevelWithError:(id *)a0;
- (id)initWithMomentNodes:(id)a0 graph:(id)a1 locationHelper:(id)a2 error:(id *)a3;
- (id)processTripLocationsWithReporter:(id)a0 error:(id *)a1;
- (id)scoreByAOIWithError:(id *)a0;

@end
