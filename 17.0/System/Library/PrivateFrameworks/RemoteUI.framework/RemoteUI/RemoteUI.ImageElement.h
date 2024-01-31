@interface RemoteUI.ImageElement : RUIElement {
    void /* unknown type, empty encoding */ _image;
    void /* unknown type, empty encoding */ _imageSize;
    void /* unknown type, empty encoding */ _tintColor;
    void /* unknown type, empty encoding */ baseURL;
}

- (id)init;
- (id)sourceURL;
- (void)setTintColor:(id)a0;
- (void)setImageSize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)setImage:(id)a0;
- (id)initWithAttributes:(id)a0 parent:(id)a1;

@end
