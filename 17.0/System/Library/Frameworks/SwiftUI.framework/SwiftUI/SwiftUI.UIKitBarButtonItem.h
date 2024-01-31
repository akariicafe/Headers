@class NSString;

@interface SwiftUI.UIKitBarButtonItem : UIBarButtonItem {
    void /* unknown type, empty encoding */ item;
    void /* unknown type, empty encoding */ listView;
    void /* unknown type, empty encoding */ edge;
    void /* unknown type, empty encoding */ host;
    void /* unknown type, empty encoding */ menuDelegate;
    void /* unknown type, empty encoding */ platformItem;
}

@property (nonatomic, copy) NSString *accessibilityIdentifier;
@property (nonatomic, copy) NSString *accessibilityLabel;

+ (BOOL)_isFromSwiftUI;

- (id)init;
- (void)performAction:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
