@class NSString;

@interface _UIOEditMenuLifecycleEventUpdateAction : _UIOClientAction

@property (readonly, nonatomic) NSString *menuIdentifier;
@property (readonly, nonatomic) long long lifecycleEvent;

- (id)identifier;
- (void).cxx_destruct;
- (void)handleClientActionToOverlayService:(id)a0;
- (id)initWithMenuIdentifier:(id)a0 event:(long long)a1;

@end
