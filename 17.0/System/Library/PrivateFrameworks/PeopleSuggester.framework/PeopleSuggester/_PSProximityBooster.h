@class RPPeopleDiscovery;

@interface _PSProximityBooster : NSObject

@property (retain, nonatomic) RPPeopleDiscovery *peopleDiscovery;

- (id)init;
- (void).cxx_destruct;
- (void)startMonitoringProximity;
- (void)stopMonitoringProximity;
- (id)suggestionsByBoostingNearbySuggestions:(id)a0;

@end
