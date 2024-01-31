@class NSString, NSArray, NSMutableArray;

@interface MRMediaControlsConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long style;
@property (nonatomic) long long initiatorStyle;
@property (copy, nonatomic) NSString *routingContextUID;
@property (copy, nonatomic) NSString *presentingAppBundleID;
@property (copy, nonatomic) NSString *nowPlayingAppBundleID;
@property (copy, nonatomic) NSArray *visibleMediaApps;
@property (nonatomic) int presentingAppProcessIdentifier;
@property (nonatomic) BOOL shouldPreventAutorotation;
@property (nonatomic) BOOL allowsNowPlayingApplicationLaunch;
@property (nonatomic) BOOL sortByIsVideoRoute;
@property (nonatomic) BOOL useGenericDevicesIconInHeader;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceRect;
@property (nonatomic) double preferredWidth;
@property (copy, nonatomic) NSString *routeUID;
@property (copy, nonatomic) NSMutableArray *customRows;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
