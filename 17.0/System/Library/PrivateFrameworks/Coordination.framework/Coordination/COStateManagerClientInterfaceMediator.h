@class COStateManager, NSString;

@interface COStateManagerClientInterfaceMediator : NSObject <COStateManagerClientInterface>

@property (readonly, weak, nonatomic) COStateManager *manager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithStateManager:(id)a0;
- (void)changesObserved:(id)a0 forPredicate:(id)a1;

@end
