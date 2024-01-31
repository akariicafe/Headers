@protocol PXGridPresentation;

@interface PXCMMShowPhotosPickerActionPerformer : PXCMMActionPerformer

@property (readonly, nonatomic) id<PXGridPresentation> gridPresentation;

- (void).cxx_destruct;
- (id)performActionWithSession:(id)a0 completionHandler:(id /* block */)a1;
- (void)performPhotosPickerActionWithSession:(id)a0 gridPresentation:(id)a1 completionHandler:(id /* block */)a2;

@end
