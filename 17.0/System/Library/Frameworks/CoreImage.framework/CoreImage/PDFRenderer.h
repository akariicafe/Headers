@interface PDFRenderer : CGRenderer {
    struct __CFDictionary { } *info;
    struct __CFData { } *data;
    struct CGDataConsumer { } *dataConsumer;
}

- (void)setFileURL:(id)a0;
- (id)init;
- (void)dealloc;
- (struct __CFData { } *)pdfdata;
- (void)flushRender;
- (BOOL)setCanvasWidth:(unsigned int)a0 height:(unsigned int)a1;
- (void)setFileTitle:(id)a0;

@end
