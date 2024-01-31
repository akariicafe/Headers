@class NSString, UITextCursorAssertionController, NSDictionary;

@interface _UITextCursorAssertion : NSObject <UITextCursorAssertion>

@property (retain, nonatomic) NSString *reason;
@property (nonatomic) unsigned long long options;
@property (weak, nonatomic) UITextCursorAssertionController *controller;
@property (retain, nonatomic) NSDictionary *userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)_initWithReason:(id)a0 options:(unsigned long long)a1 controller:(id)a2 userInfo:(id)a3;
- (void)invalidate;
- (void).cxx_destruct;

@end
