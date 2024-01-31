@class NSArray, NSString;

@interface CHUISWidgetHostCancelTouchesAssertion : NSObject <BSInvalidatable>

@property (nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly, copy, nonatomic) NSArray *assertions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (id)initWithAssertions:(id)a0;
- (void).cxx_destruct;

@end
