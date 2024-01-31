@class NSString, NSArray;
@protocol MUPlaceCardActionsRowViewMenuProvider, MKPlaceActionManagerProtocol;

@interface MUPlaceCardActionsRowView : MUGroupedActionsRowView <MUPlaceCardActionsRowViewDelegate> {
    unsigned long long _style;
    NSArray *_viewModels;
}

@property (weak, nonatomic) id<MKPlaceActionManagerProtocol> actionManager;
@property (weak, nonatomic) id<MUPlaceCardActionsRowViewMenuProvider> menuProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reload;
- (id)initWithStyle:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 style:(unsigned long long)a1;
- (void)_createActionsFromActionManager;
- (id)_buildModuleForAnalytics;
- (int)_buttonItemTypeFromActionItem:(id)a0;
- (void)actionsRowView:(id)a0 didSelectViewModel:(id)a1 presentationOptions:(id)a2;

@end
