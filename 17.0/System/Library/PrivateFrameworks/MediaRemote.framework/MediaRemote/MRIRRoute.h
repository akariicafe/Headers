@class NSString, NSSet;

@interface MRIRRoute : NSObject <MRRouteRepresentable>

@property (retain, nonatomic) NSString *routeIdentifier;
@property (retain, nonatomic) NSSet *nodes;
@property (nonatomic) BOOL donateAsCandidate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)debugRouteWithDebugIdentifier:(id)a0;
+ (id)routeWithCandidate:(id)a0;
+ (id)routeWithEndpoint:(id)a0;
+ (id)routeWithOutputDevices:(id)a0;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
