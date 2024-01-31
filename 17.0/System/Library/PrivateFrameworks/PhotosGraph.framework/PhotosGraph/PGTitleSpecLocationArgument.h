@class NSString, NSSet;

@interface PGTitleSpecLocationArgument : PGTitleSpecArgument

@property (retain, nonatomic) NSString *locationName;
@property (readonly) unsigned long long type;
@property (readonly) BOOL filterLocations;
@property unsigned long long lineBreakBehavior;
@property (retain) NSSet *usedLocationNodes;

+ (id)argumentWithLocationType:(unsigned long long)a0 filterLocations:(BOOL)a1;
+ (id)argumentWithLocationTypeLocationForLocationName:(id)a0;

- (void).cxx_destruct;
- (id)_generateBusinessItemTitleWithMomentNodes:(id)a0 locationHelper:(id)a1;
- (id)_generateLocationTitleWithOptions:(id)a0 locationHelper:(id)a1;
- (id)_resolvedStringWithMomentNodes:(id)a0 argumentEvaluationContext:(id)a1;
- (id)_resolvedStringWithMomentNodes:(id)a0 features:(id)a1 argumentEvaluationContext:(id)a2;
- (id)initWithLocationType:(unsigned long long)a0 filterLocations:(BOOL)a1;

@end
