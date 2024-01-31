@class NSArray, NSString;

@interface PXGPPTLayoutTester : NSObject <PXGGeneratedLayoutDelegate>

@property (class, readonly, nonatomic) NSArray *mockPaddingValues;

@property (retain, nonatomic) NSArray *inputItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)generatedLayout:(id)a0 inputItemAtIndex:(unsigned int)a1;
- (id)generatedLayout:(id)a0 objectReferenceAtIndex:(unsigned int)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })generatedLayout:(id)a0 bestCropRectForInputItemAtIndex:(unsigned int)a1 withAspectRatio:(double)a2;
- (void).cxx_destruct;
- (void)_iterateGridConfigurationsForItemsCount:(long long)a0 itemsIncrement:(long long)a1 handler:(id /* block */)a2;
- (void)_iterateEditorialConfigurationsForItemsCount:(long long)a0 itemsIncrement:(long long)a1 handler:(id /* block */)a2;
- (void)runEditorialLayoutTestWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (void)runGridLayoutTestWithOptions:(id)a0 completionHandler:(id /* block */)a1;

@end
