@class UIMenuElement, NSString;

@interface _UIKeyShortcutHUDMenuElement : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) UIMenuElement *uiMenuElement;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *subtitle;

+ (id)elementWithUIMenuElement:(id)a0;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_acceptMenuVisit:(id /* block */)a0 shortcutVisit:(id /* block */)a1;

@end
