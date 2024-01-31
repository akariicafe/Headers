@class NSArray, UIMenu;

@interface _UIKeyShortcutHUDMenu : _UIKeyShortcutHUDMenuElement <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) UIMenu *uiMenu;
@property (readonly, nonatomic) NSArray *children;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;

+ (id)menuWithUIMenu:(id)a0 children:(id)a1;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_acceptMenuVisit:(id /* block */)a0 shortcutVisit:(id /* block */)a1;
- (id)menuByReplacingChildren:(id)a0;

@end
