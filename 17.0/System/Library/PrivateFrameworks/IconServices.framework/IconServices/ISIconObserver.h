@interface ISIconObserver : NSObject <ISIconManagerObserver>

@property (readonly, weak) id delegate;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)iconManager:(id)a0 didInvalidateIcons:(id)a1;

@end
