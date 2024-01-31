@class NSMutableArray;

@interface BCSShareActionPickerItem : BCSActionPickerItem {
    NSMutableArray *_itemsToShare;
}

- (id)initWithAction:(id)a0;
- (id)icon;
- (id)label;
- (void).cxx_destruct;
- (BOOL)canGroupInSubmenu;
- (void)performActionWithFBOptions:(id)a0;

@end
