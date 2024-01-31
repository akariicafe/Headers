@class NSString;
@protocol TextLinkButtonDelegate;

@interface TextLinkButton : UIButton

@property (nonatomic) id<TextLinkButtonDelegate> delegate;
@property (retain, nonatomic) NSString *urlString;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)tapAction:(id)a0;

@end
