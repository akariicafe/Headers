@class PDFTextPosition;

@interface PDFTextRange : UITextRange {
    PDFTextPosition *_start;
    PDFTextPosition *_end;
}

+ (id)textRangeFromSelection:(id)a0;

- (id)start;
- (id)end;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (id)initFromPos:(id)a0 toPos:(id)a1;

@end
