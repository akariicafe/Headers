@class NSString;
@protocol SXWebContentComponentInteractionHandlerFactory, SWInteractionProvider, SXComponentInteractionHandlerManager;

@interface SXWebContentComponentInteractionManagerFactory : NSObject <SXWebContentComponentInteractionManagerFactory>

@property (readonly, nonatomic) id<SWInteractionProvider> interactionProvider;
@property (readonly, nonatomic) id<SXComponentInteractionHandlerManager> interactionHandlerManager;
@property (readonly, nonatomic) id<SXWebContentComponentInteractionHandlerFactory> componentInteractionHandlerFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithInteractionProvider:(id)a0 interactionHandlerManager:(id)a1 componentInteractionHandlerFactory:(id)a2;
- (id)interactionManagerForComponentView:(id)a0;

@end
