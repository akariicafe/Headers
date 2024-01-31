@interface GEORequestResponseMetadataRecorder : NSObject

+ (void)_populateOfflineStateInRRData:(id)a0 forCohortId:(id)a1;
+ (void)_populateSessionStateInRRData:(id)a0;
+ (void)recordDirectionsRequestResponseAnalyticsData:(id)a0 forCohortId:(id)a1;
+ (void)recordPlacesRequestResponseAnalyticsData:(id)a0 forCohortId:(id)a1;

@end
