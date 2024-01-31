@class NSString;
@protocol AVFigRouteDiscovererFactory;

@interface AVFigRouteDiscovererOutputDeviceDiscoverySessionFactory : NSObject <AVOutputDeviceDiscoverySessionFactory>

@property (readonly, nonatomic) id<AVFigRouteDiscovererFactory> routeDiscovererFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
