@class PXPresentationState, PBPresentationReaderState;

@interface PBOfficeArtReaderState : OABReaderState {
    PXPresentationState *mXmlDocumentState;
}

@property (readonly, weak) PBPresentationReaderState *presentationState;

- (void).cxx_destruct;
- (id)initWithPresentationState:(id)a0;
- (id)xmlDrawingState;
- (id)drawableOnTgtSlideForShapeId:(int)a0;
- (id)xmlDocumentState;

@end
