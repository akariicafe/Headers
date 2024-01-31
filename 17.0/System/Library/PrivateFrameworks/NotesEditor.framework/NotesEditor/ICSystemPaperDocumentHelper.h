@interface ICSystemPaperDocumentHelper : NSObject {
    void /* unknown type, empty encoding */ document;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ attachment;
@property (nonatomic, weak) void /* unknown type, empty encoding */ textView;

+ (id)drawingForPaperAttachment:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)addWithItemProviders:(id)a0 itemsAnchor:(long long)a1;
- (void)addWithItemProviders:(id)a0 itemsLocation:(struct CGPoint { double x0; double x1; })a1;
- (id)initWithPaperAttachment:(id)a0 textView:(id)a1;

@end
