@class NSString, UIFont, UIMenu;

@interface HUNavigationBarButton : UIBarButtonItem {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ actionHandler;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tapGestureRecognizer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_badgeSpacerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_badgeView;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, retain) id target;
@property (nonatomic) SEL action;
@property (nonatomic, retain) UIMenu *menu;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, weak) void /* unknown type, empty encoding */ owner;
@property (nonatomic, retain) void /* unknown type, empty encoding */ badgeValue;
@property (nonatomic, retain) UIFont *font;

+ (id)addButtonWithOwner:(id)a0;
+ (id)announceButtonWithOwner:(id)a0;
+ (id)editDoneButtonWithOwner:(id)a0;
+ (id)homeButtonWithOwner:(id)a0;

- (id)init;
- (void)performAction;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)handleTap:(id)a0;

@end
