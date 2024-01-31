@class NSString;

@interface PKTitleQueryItem : NSObject

@property (readonly, nonatomic) NSString *transcribedTitle;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;

- (void).cxx_destruct;
- (id)initWithTranscribedTitle:(id)a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
