@class INStringLocalizer;
@protocol WFActionProviderDelegate;

@interface WFActionProvider : NSObject

@property (weak, nonatomic) id<WFActionProviderDelegate> delegate;
@property (retain, nonatomic) INStringLocalizer *stringLocalizer;

- (void)deleteCache;
- (void).cxx_destruct;
- (void)createActionsForRequests:(id)a0;
- (id)availableActionIdentifiers;
- (void)createActionsForRequests:(id)a0 forceLocalActionsOnly:(BOOL)a1;
- (id)createAllAvailableActions;
- (void)fetchRemoteConfiguration:(id /* block */)a0;

@end
