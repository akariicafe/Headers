@interface FMUILocationDetailViewControllerViewOptions : NSObject

@property (class, nonatomic, readonly) FMUILocationDetailViewControllerViewOptions *showLocationDetails;
@property (class, nonatomic, readonly) FMUILocationDetailViewControllerViewOptions *showShareLocationButton;
@property (class, nonatomic, readonly) FMUILocationDetailViewControllerViewOptions *showRequestLocationButton;
@property (class, nonatomic, readonly) FMUILocationDetailViewControllerViewOptions *showLocateButtons;
@property (class, nonatomic, readonly) FMUILocationDetailViewControllerViewOptions *presentFullScreenWhenTapped;
@property (class, nonatomic, readonly) FMUILocationDetailViewControllerViewOptions *punchOutToFindMyWhenTapped;
@property (class, nonatomic, readonly) FMUILocationDetailViewControllerViewOptions *useCompactInterface;
@property (class, nonatomic, readonly) FMUILocationDetailViewControllerViewOptions *spotlightWidget;
@property (class, nonatomic, readonly) FMUILocationDetailViewControllerViewOptions *messagesChatDetails;
@property (class, nonatomic, readonly) FMUILocationDetailViewControllerViewOptions *default;

@property (nonatomic, readonly) void /* unknown type, empty encoding */ rawValue;
@property (nonatomic, readonly) long long hash;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithRawValue:(long long)a0;

@end
