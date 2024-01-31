@class NSString, UIPDFAnnotationView, CALayer, UIPDFPopupAnnotation, UIPDFAnnotationController, UIPDFPage, NSMutableArray, UIPDFSelection;

@interface UIPDFAnnotation : NSObject <CALayerDelegate> {
    struct CGPDFDictionary { } *_dictionary;
    struct CGColor { } *_color;
    void *_appearanceStream;
    struct CGPDFString { } *_pdfContents;
    NSString *_annotationID;
    BOOL _hidden;
    NSMutableArray *_quadPoints;
    UIPDFSelection *_selection;
}

@property (retain, nonatomic) CALayer *drawingLayer;
@property (retain, nonatomic) UIPDFAnnotationView *annotationView;
@property (nonatomic) UIPDFPage *page;
@property (nonatomic) UIPDFAnnotationController *annotationController;
@property (readonly, nonatomic) BOOL recognizeGestures;
@property (nonatomic) BOOL editable;
@property (nonatomic) UIPDFSelection *selection;
@property (retain, nonatomic) id data;
@property (retain, nonatomic) NSString *contents;
@property (nonatomic) long long index;
@property (nonatomic) UIPDFPopupAnnotation *popup;
@property (retain, nonatomic) NSString *associatedAnnotationID;
@property (nonatomic) unsigned long long tag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newAnnotationWithPage:(id)a0 fromArchive:(id)a1;

- (BOOL)hidden;
- (id)init;
- (struct CGColor { } *)color;
- (void)dealloc;
- (id)selection;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (void)setSelection:(id)a0;
- (void)drawInContext:(struct CGContext { } *)a0;
- (void)drawLayer:(id)a0 inContext:(struct CGContext { } *)a1;
- (void)setColor:(struct CGColor { } *)a0;
- (id)archive;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (Class)viewClass;
- (BOOL)containsPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)descriptionHOLD;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })Rect;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectIn:(struct CGPDFArray { } *)a0;
- (id)annotationID;
- (int)annotationType;
- (id)getImageNamed:(id)a0 ofType:(id)a1;
- (BOOL)hasPopUp;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary { } *)a0;
- (void)makeQuadpointsFrom:(id)a0;
- (struct CGPath { } *)newPathFromQuadPoints;
- (id)newSelection;
- (const char *)pdfContents;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })popUpAnnotationRect;
- (BOOL)recognizeGestures;
- (void)setAnnotationID:(id)a0;
- (void)setPageView:(id)a0;

@end
