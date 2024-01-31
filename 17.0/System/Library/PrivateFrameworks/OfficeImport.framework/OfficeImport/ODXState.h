@class CXNamespace, OAXDrawingState;

@interface ODXState : OCXReadState {
    OAXDrawingState *mOfficeArtState;
}

@property (retain, nonatomic) CXNamespace *ODXDiagramNamespace;

- (void).cxx_destruct;
- (id)initWithOfficeArtState:(id)a0;
- (id)officeArtState;
- (void)setupNSForXMLFormat:(int)a0;

@end
