@interface CHChatBubbleRecognitionResult : CHEllipseRecognitionResult

@property (readonly) struct CGPoint { double x; double y; } stemLocation;
@property (readonly) double stemWidth;

- (id)initWithString:(id)a0 score:(double)a1 rotation:(double)a2 center:(struct CGPoint { double x0; double x1; })a3 size:(struct CGSize { double x0; double x1; })a4 stemLocation:(struct CGPoint { double x0; double x1; })a5 stemWidth:(double)a6;

@end
