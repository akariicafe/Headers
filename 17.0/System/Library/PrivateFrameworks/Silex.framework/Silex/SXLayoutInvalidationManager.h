@class NSString, NSMutableArray, NSMutableDictionary;
@protocol SXLayoutInvalidationManagerDelegate, SXLayoutBlueprintProvider;

@interface SXLayoutInvalidationManager : NSObject <SXLayoutInvalidationManager>

@property (readonly, nonatomic) id<SXLayoutBlueprintProvider> layoutBlueprintProvider;
@property (readonly, nonatomic) NSMutableArray *possibleInvalidations;
@property (retain, nonatomic) NSMutableDictionary *pendingInvalidations;
@property (nonatomic) BOOL invalidationDispatched;
@property (weak, nonatomic) id<SXLayoutInvalidationManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)cancelPendingInvalidationForComponent:(id)a0;
- (id)invalidateComponent:(id)a0 state:(id)a1;
- (id)invalidateComponent:(id)a0 state:(id)a1 priority:(unsigned long long)a2;
- (id)invalidateComponent:(id)a0 state:(id)a1 suggestedSize:(struct CGSize { double x0; double x1; })a2;
- (id)invalidateComponent:(id)a0 state:(id)a1 suggestedSize:(struct CGSize { double x0; double x1; })a2 priority:(unsigned long long)a3;
- (id)invalidateComponent:(id)a0 suggestedSize:(struct CGSize { double x0; double x1; })a1;
- (id)invalidateComponent:(id)a0 suggestedSize:(struct CGSize { double x0; double x1; })a1 priority:(unsigned long long)a2;
- (void)mightInvalidateComponent:(id)a0;
- (id)initWithBlueprintProvider:(id)a0;
- (id)invalidateComponent:(id)a0;
- (id)invalidateComponent:(id)a0 invalidation:(id /* block */)a1 priority:(unsigned long long)a2;
- (void)invalidateQueuedComponents;

@end
