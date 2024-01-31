@protocol SXURLActionFactory, SXArticleURLFactory, SXComponentInteractionHandlerManager, SXActionComponentInteractionHandlerFactory;

@interface SXArticleLinkComponentViewFactory : SXContainerComponentViewFactory

@property (readonly, nonatomic) id<SXComponentInteractionHandlerManager> interactionHandlerManager;
@property (readonly, nonatomic) id<SXActionComponentInteractionHandlerFactory> interactionHandlerFactory;
@property (readonly, nonatomic) id<SXURLActionFactory> URLActionFactory;
@property (readonly, nonatomic) id<SXArticleURLFactory> articleURLFactory;

- (int)role;
- (void).cxx_destruct;
- (id)type;
- (id)componentViewForComponent:(id)a0;
- (id)initWithDOMObjectProvider:(id)a0 viewport:(id)a1 presentationDelegateProvider:(id)a2 componentStyleRendererFactory:(id)a3 mediaSharingPolicyProvider:(id)a4 interactionHandlerManager:(id)a5 interactionHandlerFactory:(id)a6 URLActionFactory:(id)a7 articleURLFactory:(id)a8;

@end
