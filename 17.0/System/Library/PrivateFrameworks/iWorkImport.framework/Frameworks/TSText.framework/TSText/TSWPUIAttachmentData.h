@class TSWPUIGraphicalAttachment;

@interface TSWPUIAttachmentData : NSObject

@property (readonly, nonatomic) TSWPUIGraphicalAttachment *attachment;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } location;
@property (readonly, nonatomic) long long charIndex;

- (void).cxx_destruct;
- (void)adjustAlignmentBy:(double)a0;
- (id)initWithAttachment:(id)a0 location:(struct CGPoint { double x0; double x1; })a1 charIndex:(long long)a2;

@end
