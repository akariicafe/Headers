@class NSSet;

@interface IAPNavigationAccessory : NSObject

@property BOOL _wasFoundInLastUpdate;
@property unsigned long long identifier;
@property (retain) NSSet *components;

- (unsigned long long)hash;
- (id)initWithDict:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)requestedSourceNameForAnyComponent;
- (BOOL)requestedSourceSupportsRouteGuidanceForAnyComponent;

@end
