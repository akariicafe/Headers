@class TUICursorAccessory, TUICursorAccessoryAssertionController, NSString;

@interface TUICursorAccessoryAssertion : NSObject <TUICursorAccessoryAssertion>

@property (nonatomic) unsigned long long accessoryType;
@property (retain, nonatomic) TUICursorAccessory *accessory;
@property (weak, nonatomic) TUICursorAccessoryAssertionController *controller;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithAccessoryType:(unsigned long long)a0 accessory:(id)a1 controller:(id)a2;

@end
