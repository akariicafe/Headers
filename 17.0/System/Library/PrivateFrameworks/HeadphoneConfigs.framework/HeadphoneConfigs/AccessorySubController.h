@class BTSDevice;

@interface AccessorySubController : PSListItemsController {
    BTSDevice *_currentDevice;
}

- (id)init;
- (void)dealloc;
- (id)specifiers;
- (void).cxx_destruct;
- (void)listItemSelected:(id)a0;

@end
