@class PXWidgetSpec, PXWidgetBarSpec;

@interface PXWidgetCompositionSpec : NSObject

@property (readonly, nonatomic) PXWidgetBarSpec *_defaultHeaderSpec;
@property (readonly, nonatomic) PXWidgetBarSpec *_headerSpecForFlushedContent;
@property (readonly, nonatomic) PXWidgetSpec *widgetSpec;
@property (readonly, nonatomic) long long maximumNumberOfColumns;
@property (readonly, nonatomic) PXWidgetBarSpec *footerSpec;
@property (readonly, nonatomic) long long disclosureLocation;

- (id)init;
- (void).cxx_destruct;
- (id)headerSpecForWidgetContentLayoutStyle:(long long)a0;
- (id)initWithExtendedTraitCollection:(id)a0 widgetSpec:(id)a1;

@end
