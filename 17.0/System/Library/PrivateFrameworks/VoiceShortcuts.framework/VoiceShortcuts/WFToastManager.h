@class WFSessionKitAssertion;

@interface WFToastManager : NSObject {
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ _toastedSession;
    void /* unknown type, empty encoding */ transaction;
    void /* unknown type, empty encoding */ timer;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic, readonly) WFSessionKitAssertion *toastedSession;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)eatTheToastWithReason:(id)a0;
- (BOOL)toastSessionWithIdentifier:(id)a0 forDuration:(double)a1;

@end
