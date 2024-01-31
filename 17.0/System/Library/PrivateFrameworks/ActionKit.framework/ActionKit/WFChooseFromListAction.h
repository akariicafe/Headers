@interface WFChooseFromListAction : WFHandleCustomIntentAction

+ (BOOL)outputIsExemptFromTaintTrackingInheritance;
+ (id)userInterfaceProtocol;

- (id)appResource;
- (id)contentDestinationWithError:(id *)a0;
- (void)getOutputFromIntentResponse:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)populatesInputFromInputParameter;
- (void)resolveSlot:(id)a0 withProcessedValue:(id)a1 parameter:(id)a2 input:(id)a3 completion:(id /* block */)a4;
- (void)runAsynchronouslyWithInput:(id)a0;
- (BOOL)shouldBeSuggestedAfterAction:(id)a0 inWorkflow:(id)a1;
- (id)roundedImageFromWFImage:(id)a0 roundingStyle:(unsigned long long)a1 desiredSize:(struct CGSize { double x0; double x1; })a2 desiredScale:(double)a3;
- (id)contentItemsFromSelectedItem:(id)a0;
- (id)itemsFromDictionaryItem:(id)a0;
- (void)presentAlertWithUserInterface:(id)a0 prompt:(id)a1 input:(id)a2;

@end
