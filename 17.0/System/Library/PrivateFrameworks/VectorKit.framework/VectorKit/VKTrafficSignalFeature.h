@interface VKTrafficSignalFeature : VKTrafficFeature

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) unsigned int countryCode;
@property (readonly, nonatomic) BOOL hasCountryCode;

+ (id)stringForTrafficSignalType:(long long)a0;

- (id)initWithTrafficSignalType:(long long)a0 uniqueIdentifier:(id)a1 routeOffset:(struct PolylineCoordinate { unsigned int x0; float x1; })a2 onRoute:(id)a3;
- (id)initWithTrafficSignal:(id)a0 onRoute:(id)a1;
- (void)populateDebugNode:(void *)a0;

@end
