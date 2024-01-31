@class NSString, NSAttributedString;

@interface QuickLook.QLTextDocument : UIDocument {
    void /* unknown type, empty encoding */ content;
}

@property (nonatomic, readonly) BOOL hasRichContent;
@property (nonatomic, readonly) NSString *textContent;
@property (nonatomic, readonly) NSAttributedString *attributedTextContent;

- (id)initWithFileURL:(id)a0;
- (void).cxx_destruct;
- (id)contentsForType:(id)a0 error:(id *)a1;
- (BOOL)loadFromContents:(id)a0 ofType:(id)a1 error:(id *)a2;
- (void)saveWithTextContent:(id)a0;

@end
