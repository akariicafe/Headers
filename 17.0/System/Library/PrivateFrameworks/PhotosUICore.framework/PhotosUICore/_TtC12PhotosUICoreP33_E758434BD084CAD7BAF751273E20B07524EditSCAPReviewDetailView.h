@interface _TtC12PhotosUICoreP33_E758434BD084CAD7BAF751273E20B07524EditSCAPReviewDetailView : UIView <PEResourceLoaderDelegate> {
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ asset;
    void /* unknown type, empty encoding */ viewingMode;
    void /* unknown type, empty encoding */ preset;
    void /* unknown type, empty encoding */ resourceLoader;
    void /* unknown type, empty encoding */ tungstenView;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)resourceLoader:(id)a0 request:(id)a1 didCompleteWithResult:(id)a2;
- (void)resourceLoader:(id)a0 request:(id)a1 downloadProgress:(double)a2;
- (void)resourceLoader:(id)a0 request:(id)a1 mediaLoadDidFailWithError:(id)a2;

@end
