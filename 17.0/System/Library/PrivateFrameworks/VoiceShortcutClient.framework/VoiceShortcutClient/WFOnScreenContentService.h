@interface WFOnScreenContentService : NSObject

+ (id)sharedService;

- (void)getOnScreenContentWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (void)getOnScreenContentWithOptions:(id)a0 completion:(id /* block */)a1;

@end
