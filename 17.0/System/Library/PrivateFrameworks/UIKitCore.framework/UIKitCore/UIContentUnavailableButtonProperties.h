@class UIAction, UIMenu, UIButtonConfiguration;

@interface UIContentUnavailableButtonProperties : NSObject <NSCopying, NSSecureCoding> {
    struct { unsigned char hasCustomizedEnabled : 1; unsigned char hasCustomizedRole : 1; } _buttonFlags;
    BOOL _enabled;
    BOOL __showsMenuAsPrimaryAction;
    UIButtonConfiguration *_configuration;
    UIAction *_primaryAction;
    UIMenu *_menu;
    long long _role;
    UIButtonConfiguration *_defaultConfiguration;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) UIButtonConfiguration *configuration;
@property (copy, nonatomic) UIAction *primaryAction;
@property (copy, nonatomic) UIMenu *menu;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic) long long role;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
