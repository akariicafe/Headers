@class RBEncoderSet;

@interface SwiftUI.RBDisplayListEncoderDelegate : NSObject <RBEncoderDelegate> {
    void /* unknown type, empty encoding */ encoder;
}

@property (nonatomic, readonly) RBEncoderSet *encoderSet;

- (id)init;
- (id)encodedCGFontData:(struct CGFont { } *)a0 error:(id *)a1;
- (id)encodedFontData:(id)a0 cgFont:(struct CGFont { } *)a1 error:(id *)a2;
- (BOOL)shouldEncodeFontSubset:(struct CGFont { } *)a0;
- (id)encodedImageData:(struct { int x0; void *x1; })a0 error:(id *)a1;
- (void).cxx_destruct;

@end
