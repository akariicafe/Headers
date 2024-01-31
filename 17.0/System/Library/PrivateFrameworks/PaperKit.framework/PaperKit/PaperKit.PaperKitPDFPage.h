@class NSArray, NSString;

@interface PaperKit.PaperKitPDFPage : PDFPage {
    void /* unknown type, empty encoding */ render;
    void /* unknown type, empty encoding */ pageId;
    void /* unknown type, empty encoding */ appearanceStreamAnnotations;
    void /* unknown type, empty encoding */ annotationIDState;
}

@property (nonatomic, readonly) NSArray *annotations;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(void *)a0;
- (id)initWithImage:(id)a0 options:(id)a1;
- (Class)annotationSubclassForSubtype:(id)a0;
- (void)drawWithBox:(long long)a0 inContext:(struct CGContext { } *)a1 withOptions:(id)a2;

@end
