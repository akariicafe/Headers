@class VKCActionInfoButton, DDUIAction, VKCBaseDataDetectorElement, UIMenu;

@interface VKCQuickActionMenuTuple : NSObject

@property (retain, nonatomic) VKCBaseDataDetectorElement *element;
@property (retain, nonatomic) UIMenu *menu;
@property (retain, nonatomic) DDUIAction *defaultAction;
@property (retain, nonatomic) VKCActionInfoButton *button;

- (void).cxx_destruct;

@end
