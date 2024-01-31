@interface WFOnScreenContentExtractor : NSObject

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } applicationFrame;
@property (nonatomic) long long applicationLevel;

- (id)responseWithError:(id)a0;
- (void)handleAction:(id)a0 completionHandler:(id /* block */)a1;
- (id)activityItemsConfigurationFromScene:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })applicationFrameForScene:(id)a0;
- (void)loadActivityItemsConfigurationItemsForScene:(id)a0 serviceOptions:(id)a1 completionHandler:(id /* block */)a2;
- (id)nodeWithItem:(id)a0 file:(id)a1;

@end
