@protocol SAElement;

@interface SAUIElementAssertion : SAAssertion

@property (readonly, weak, nonatomic) id<SAElement> element;
@property (nonatomic) long long invalidationLayoutModeChangeReason;

- (void).cxx_destruct;
- (id)_descriptionConstituents;
- (void)invalidateWithReason:(id)a0 layoutModeChangeReason:(long long)a1;
- (id)initWithElement:(id)a0 invalidationHandler:(id /* block */)a1;

@end
