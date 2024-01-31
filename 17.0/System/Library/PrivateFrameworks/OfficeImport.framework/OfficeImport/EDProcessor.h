@class NSMutableArray, EDResources, EDWorkbook;

@interface EDProcessor : NSObject {
    EDWorkbook *mWorkbook;
    EDResources *mResources;
    NSMutableArray *mObjects;
}

- (void).cxx_destruct;
- (void)applyProcessorToObject:(id)a0 sheet:(id)a1;
- (void)applyProcessorWithSheet:(id)a0;
- (id)initWithWorkbook:(id)a0;
- (BOOL)isObjectSupported:(id)a0;
- (void)markObjectForPostProcessing:(id)a0;

@end
