@class NSString;
@protocol SXAnalyticsReportingProvider, SXActionManager, SXActionSerializer, SXAction;

@interface SXActionComponentInteractionHandler : NSObject <SXPostActionHandler, SXComponentInteractionHandler, SXPreviewComponentInteractionHandler>

@property (readonly, nonatomic) id<SXAction> action;
@property (readonly, nonatomic) id<SXActionManager> actionManager;
@property (readonly, nonatomic) id<SXActionSerializer> actionSerializer;
@property (readonly, nonatomic) id<SXAnalyticsReportingProvider> analyticsReportingProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)previewViewController;
- (void)handledAction:(id)a0 state:(unsigned long long)a1;
- (void)commitViewController:(id)a0;
- (id)contextMenuForComponentView:(id)a0 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)handleInteractionType:(unsigned long long)a0 sourceView:(id)a1 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)initWithAction:(id)a0 actionManager:(id)a1 actionSerializer:(id)a2 analyticsReportingProvider:(id)a3;
- (id)toolTipForComponentView:(id)a0;

@end
