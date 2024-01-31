@class NSString, UIColor, SFImage;
@protocol SearchUIButtonItemViewDelegate;

@interface SearchUIButtonItemView : UIButton

@property (retain, nonatomic) NSString *buttonTitle;
@property (retain, nonatomic) UIColor *buttonColor;
@property (retain, nonatomic) SFImage *sfImage;
@property (weak, nonatomic) id<SearchUIButtonItemViewDelegate> delegate;

- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void).cxx_destruct;

@end
