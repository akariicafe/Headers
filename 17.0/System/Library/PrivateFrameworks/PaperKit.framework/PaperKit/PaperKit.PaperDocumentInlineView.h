@interface PaperKit.PaperDocumentInlineView : UIView {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ toolPicker;
    void /* unknown type, empty encoding */ syncManager;
    void /* unknown type, empty encoding */ syncCancellables;
    void /* unknown type, empty encoding */ crContext;
    void /* unknown type, empty encoding */ paperDocumentView;
    void /* unknown type, empty encoding */ temporaryPaperDocument;
    void /* unknown type, empty encoding */ liveStreamMessenger;
    void /* unknown type, empty encoding */ participantDetailsDataSource;
    void /* unknown type, empty encoding */ showParticipantCursors;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (void)toolPickerWillShow:(id)a0;

@end
