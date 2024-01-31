@class SXDataTableLayouter, NSString, SXDataTableComponentController;
@protocol SXLayoutContext, SXTextComponentLayoutHosting;

@interface SXDataTableComponentSizer : SXComponentSizer <SXDataTableComponentControllerDataSource>

@property (readonly, weak, nonatomic) id<SXTextComponentLayoutHosting> textComponentLayoutHosting;
@property (retain, nonatomic) SXDataTableLayouter *layouter;
@property (retain, nonatomic) SXDataTableComponentController *dataTableComponentController;
@property (retain, nonatomic) id<SXLayoutContext> currentLayoutContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (double)calculateHeightForWidth:(double)a0 layoutContext:(id)a1;
- (id)DOMObjectProviderForDataTableComponentController:(id)a0;
- (id)componentForDataTableComponentController:(id)a0;
- (id)contentSizeCategoryForDataTableComponentController:(id)a0;
- (id)documentColumnLayoutForDataTableComponentController:(id)a0;
- (id)initWithComponent:(id)a0 componentLayout:(id)a1 componentStyle:(id)a2 DOMObjectProvider:(id)a3 layoutOptions:(id)a4 textComponentLayoutHosting:(id)a5 textSourceFactory:(id)a6 recordValueTransformerFactory:(id)a7;
- (id)tableStyleForComponent:(id)a0;
- (id)textComponentLayoutHostingForDataTableComponentController:(id)a0;
- (id)unitConverterForDataTableComponentController:(id)a0;

@end
