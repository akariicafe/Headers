@class NSDictionary, CKBalloonView;

@interface CKThrowBalloonViewAttributes : NSObject

@property (retain, nonatomic) CKBalloonView *throwBalloonView;
@property (retain, nonatomic) NSDictionary *supplementaryViews;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } startFrame;

- (void).cxx_destruct;

@end
