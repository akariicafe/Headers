@interface CKPrintTranscriptCollectionViewController : CKTranscriptCollectionViewController

- (void)chatItemsDidChange:(id)a0;
- (id)initWithConversation:(id)a0 delegate:(id)a1 balloonMaxWidth:(double)a2 marginInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a3;
- (void)updateUIContents;

@end
