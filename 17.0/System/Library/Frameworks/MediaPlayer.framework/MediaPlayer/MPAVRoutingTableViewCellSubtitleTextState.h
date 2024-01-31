@class NSString;

@interface MPAVRoutingTableViewCellSubtitleTextState : NSObject

@property (nonatomic) unsigned long long currentVisibleTextType;
@property (readonly, nonatomic) BOOL hasVisibleTextTypeToShow;
@property (readonly, nonatomic) BOOL hasVisibleTextTypeToTransitionTo;
@property (readonly, copy, nonatomic) NSString *stringForCurrentVisibleTextType;
@property (copy, nonatomic) NSString *routeUID;
@property (copy, nonatomic) NSString *batteryText;
@property (copy, nonatomic) NSString *pairedDeviceText;
@property (copy, nonatomic) NSString *localizedSubtitle;
@property (nonatomic, getter=isAnimating) BOOL animating;

- (void).cxx_destruct;
- (unsigned long long)_nextAvailableVisibleTextType;
- (id)_stringForVisibleTextType:(unsigned long long)a0;
- (void)resetForNewRoute;
- (void)transitionToNextAvailableVisibleTextType;

@end
