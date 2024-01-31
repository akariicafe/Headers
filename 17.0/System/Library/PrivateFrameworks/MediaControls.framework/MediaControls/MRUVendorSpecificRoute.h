@class MPAVRoute, NSArray, NSMutableDictionary, UIImage, NSString, DADevice;

@interface MRUVendorSpecificRoute : MPAVRoute

@property (retain, nonatomic) NSMutableDictionary *subrouteMap;
@property (readonly, nonatomic) BOOL isGroup;
@property (nonatomic) BOOL expanded;
@property (nonatomic) BOOL shouldBeDisplayed;
@property (readonly, nonatomic) NSArray *endpoints;
@property (readonly, nonatomic) DADevice *device;
@property (readonly, nonatomic) UIImage *protocolIcon;
@property (readonly, nonatomic) NSString *protocolName;
@property (readonly, nonatomic) NSString *protocolIdentifier;
@property (readonly, nonatomic) NSArray *subroutes;
@property (readonly, nonatomic) MRUVendorSpecificRoute *preferredSubroute;
@property (retain, nonatomic) MRUVendorSpecificRoute *tempPreferredSubrouteOverride;
@property (nonatomic) BOOL isPicked;
@property (readonly, nonatomic) long long vendorSpecificRouteType;
@property (retain, nonatomic) MPAVRoute *underlyingNativeRoute;
@property (nonatomic) BOOL isPreferredRoute;

- (BOOL)supportsGrouping;
- (BOOL)isKnown;
- (id)routeUID;
- (long long)routeType;
- (BOOL)supportsAirPlayGrouping;
- (BOOL)isAirPlayRoute;
- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;
- (id)routeName;
- (long long)routeSubtype;
- (BOOL)isDisplayedAsPicked;
- (void)addSubRoute:(id)a0;
- (long long)moreCapableTypeBetween:(long long)a0 otherType:(long long)a1;

@end
