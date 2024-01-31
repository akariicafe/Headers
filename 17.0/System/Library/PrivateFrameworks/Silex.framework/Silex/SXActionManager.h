@class NSString, SXActionManagerPreview;
@protocol SXActionViewManager, SXPostActionHandlerManager, SXActionActivityManager;

@interface SXActionManager : NSObject <SXActionManager>

@property (readonly, nonatomic) id<SXActionActivityManager> activityManager;
@property (readonly, nonatomic) id<SXActionViewManager> viewManager;
@property (retain, nonatomic) SXActionManagerPreview *currentPreview;
@property (readonly, nonatomic) id<SXPostActionHandlerManager> postActionHandlerManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)commitPreviewViewController:(id)a0;
- (void).cxx_destruct;
- (id)previewViewControllerForAction:(id)a0;
- (id)contextMenuConfigurationForAction:(id)a0 sourceView:(id)a1 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)initWithActionActivityManager:(id)a0 viewManager:(id)a1 postActionHandlerManager:(id)a2;
- (void)notifyPostActionHandlers:(id)a0 action:(id)a1 state:(unsigned long long)a2;
- (void)performAction:(id)a0 postActionHandlers:(id)a1;
- (void)performAction:(id)a0 postActionHandlers:(id)a1 sourceView:(id)a2 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 mode:(unsigned long long)a4;

@end
