@class CKOrganicImageLayoutRecipe;

@interface CKOrganicTranscriptBalloonCell : CKTranscriptBalloonCell

@property (retain, nonatomic) CKOrganicImageLayoutRecipe *layoutRecipe;

- (double)layoutOffset;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)configureForChatItem:(id)a0 context:(id)a1;
- (void)layoutSubviewsForAlignmentContents;

@end
