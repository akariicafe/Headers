@class GDKnosisServer, GDEntityResolutionInProcessTextClient;

@interface IQFMapsPersonalizationLookup : NSObject {
    GDEntityResolutionInProcessTextClient *_ecrClient;
    GDKnosisServer *_knosisServer;
}

+ (id)_aggregateLifeEvents:(id)a0;
+ (id)sharedMapsPersonalizationLookup;
+ (void)_fetchResultsForEntityIds:(id)a0 knosisServer:(id)a1 completionHandler:(id /* block */)a2;
+ (id)_muidForKnosisAnswer:(id)a0 entityIDToMuid:(id)a1;
+ (id)_parseECRRankedItem:(id)a0 locationMUIDs:(id)a1;
+ (id)_parseKnosisAnswer:(id)a0 entityIDToMuid:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)_fetchECRResultForLocationMUIDs:(id)a0 completionHandler:(id /* block */)a1;
- (void)_fetchResultsForEntityIds:(id)a0 completionHandler:(id /* block */)a1;
- (id)eventsAtLocations:(id)a0;
- (void)eventsAtLocations:(id)a0 completionHandler:(id /* block */)a1;

@end
