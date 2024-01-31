@class UICommand;

@interface MFMailMenuCommand : NSObject

@property (readonly, nonatomic) UICommand *command;
@property (readonly, nonatomic) long long menu;

+ (id)shortcutWithCommand:(id)a0 menu:(long long)a1;
+ (id)shortcutWithInput:(id)a0 flags:(long long)a1 repeatable:(BOOL)a2 menu:(long long)a3 action:(SEL)a4;
+ (id)shortcutWithInput:(id)a0 flags:(long long)a1 repeatable:(BOOL)a2 menu:(long long)a3 action:(SEL)a4 title:(id)a5 plist:(id)a6;

- (void).cxx_destruct;
- (id)initWithCommand:(id)a0 menu:(long long)a1;

@end
