@class SBDisplayItem;

@interface SBSetInterfaceOrientationFromUserResizingEventResponse : SBSwitcherModifierEventResponse

@property (readonly, nonatomic) SBDisplayItem *displayItem;
@property (readonly, nonatomic) long long desiredOrientation;

- (void).cxx_destruct;
- (long long)type;
- (id)initWithDisplayItem:(id)a0 desiredContentOrientation:(long long)a1;

@end
