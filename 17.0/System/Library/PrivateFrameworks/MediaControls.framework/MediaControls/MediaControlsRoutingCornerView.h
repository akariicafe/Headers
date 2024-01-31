@class NSString;

@interface MediaControlsRoutingCornerView : CCUICAPackageView <UIPointerInteractionDelegate>

@property (nonatomic) long long deviceType;
@property (nonatomic, getter=routesAreAvailable) BOOL routesAvailable;
@property (nonatomic, getter=isRouting) BOOL routing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
