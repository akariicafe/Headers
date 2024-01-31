@class SFOpenCoreSpotlightItemCommand;

@interface SearchUIOpenCoreSpotlightItemHandler : SearchUIOpenUserActivityHandler

@property (readonly) SFOpenCoreSpotlightItemCommand *command;

- (id)createViewControllerForCommand:(id)a0 environment:(id)a1;
- (void)getUserActivityForCommand:(id)a0 environment:(id)a1 completionHandler:(id /* block */)a2;

@end
