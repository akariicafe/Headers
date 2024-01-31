@class PKDrawing;

@interface ICSystemPaperIndexableTextContentHelper : NSObject {
    void /* unknown type, empty encoding */ paperDocument;
    void /* unknown type, empty encoding */ drawing;
    void /* unknown type, empty encoding */ attachment;
}

@property (nonatomic, copy) PKDrawing *drawing;

- (id)init;
- (void).cxx_destruct;
- (id)searchWithQuery:(id)a0;
- (id)initWithPaperAttachment:(id)a0;

@end
