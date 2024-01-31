@class RPRemoteDisplayDiscovery, NSMutableDictionary, NSArray;

@interface DDUIRapportPeopleDiscovery : NSObject

@property (retain, nonatomic) RPRemoteDisplayDiscovery *discovery;
@property (retain, nonatomic) NSMutableDictionary *discoveredDevicesMap;
@property (retain, nonatomic) NSArray *previousAvailablePeople;
@property (copy, nonatomic) id /* block */ availablePeopleChangedHandler;
@property (copy, nonatomic) id /* block */ discoverySessionChangedHandler;
@property (copy, nonatomic) id /* block */ personDeclinedHandler;

- (void)invalidate;
- (void).cxx_destruct;
- (id)availablePeople;
- (void)activateDiscoveryWithCompletion:(id /* block */)a0;
- (void)cancelPerson:(id)a0;
- (id)getDiscoveredDevicesMap;
- (id)initWithRemoteDisplayDiscovery:(id)a0 deviceSelectedHandler:(id /* block */)a1;
- (void)selectPerson:(id)a0;

@end
