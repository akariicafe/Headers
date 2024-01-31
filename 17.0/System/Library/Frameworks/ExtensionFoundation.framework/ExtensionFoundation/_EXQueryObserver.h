@class NSArray, NSString;
@protocol _EXQueryObserverDelegate;

@interface _EXQueryObserver : _EXQueryController <_EXQueryControllerDelegate>

@property (weak) id<_EXQueryObserverDelegate> internalDelegate;
@property (readonly) NSArray *extensions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithQueries:(id)a0 delegate:(id)a1;
- (void).cxx_destruct;
- (void)queryControllerDidUpdate:(id)a0 difference:(id)a1;

@end
