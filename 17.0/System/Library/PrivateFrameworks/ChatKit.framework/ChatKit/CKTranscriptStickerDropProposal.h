@class NSIndexPath, UIDragItem;

@interface CKTranscriptStickerDropProposal : NSObject

@property (retain, nonatomic) UIDragItem *dragItem;
@property (nonatomic) struct CGPoint { double x; double y; } previewCenter;
@property (retain, nonatomic) NSIndexPath *targetBalloonIndex;

- (void).cxx_destruct;
- (id)initWithDragItem:(id)a0 previewCenter:(struct CGPoint { double x0; double x1; })a1 targetBalloonIndex:(id)a2;

@end
