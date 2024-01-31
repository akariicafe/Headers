@class ICTK2TextView;

@interface ICTK2TextContainer : NSTextContainer <ICSystemPaperTextAttachmentNotesEditorBridgeWorkaround>

@property (nonatomic) BOOL inPreviewMode;
@property (nonatomic) BOOL insideSystemPaper;
@property (weak, nonatomic) ICTK2TextView *tk2TextView;

- (id)layoutManager;
- (void).cxx_destruct;
- (BOOL)isSimpleRectangularTextContainer;

@end
