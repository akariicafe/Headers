@class UIResponder;

@interface SwiftUI.UIKitKeyPressResponder : UIResponder {
    void /* unknown type, empty encoding */ eventBindingManager;
    void /* unknown type, empty encoding */ _next;
    void /* unknown type, empty encoding */ tracker;
}

@property (nonatomic, readonly) UIResponder *nextResponder;

- (id)init;
- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (void)pressesChanged:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)pressesCancelled:(id)a0 withEvent:(id)a1;

@end
