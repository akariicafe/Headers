@class SKUIModalDocumentController, NSArray;

@interface SKUIJSModalDocumentController : IKJSObject <SKUIJSModalDocumentController> {
    SKUIModalDocumentController *_modalDocumentController;
}

@property (readonly, weak) SKUIModalDocumentController *modalDocumentController;
@property (readonly, retain, nonatomic) NSArray *documents;

- (void).cxx_destruct;
- (id)_adjustedOptionsWithOptions:(id)a0;
- (id)initWithAppContext:(id)a0 modalDocumentController:(id)a1;
- (void)popDocument;
- (void)popToDocument:(id)a0;
- (void)pushDocument:(id)a0 :(id)a1;
- (void)replaceDocument:(id)a0 :(id)a1 :(id)a2;

@end
