@class NSString;

@interface MSTrackListTableHeaderView : UIView {
    struct CGSize { double width; double height; } _titleSize;
}

@property (retain, nonatomic) NSString *title;

- (void)dealloc;
- (void)sizeToFit;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
