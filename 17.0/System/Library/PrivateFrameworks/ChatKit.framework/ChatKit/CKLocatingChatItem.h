@class NSString;

@interface CKLocatingChatItem : CKBalloonChatItem

@property (readonly, copy, nonatomic) NSString *locationText;

- (id)time;
- (id)sender;
- (id)message;
- (id)description;
- (BOOL)failed;
- (BOOL)isFromMe;
- (Class)balloonViewClass;
- (void)configureBalloonView:(id)a0;
- (struct CGSize { double x0; double x1; })loadSizeThatFits:(struct CGSize { double x0; double x1; })a0 textAlignmentInsets:(out struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;

@end
