@class EKEvent, EKStructuredLocation, UIView;
@protocol EKEventDetailSuggestedLocationCellDelegate, SGBannerProtocol;

@interface EKEventDetailSuggestedLocationCell : UITableViewCell {
    EKEvent *_event;
    EKStructuredLocation *_location;
}

@property (retain, nonatomic) UIView<SGBannerProtocol> *banner;
@property (nonatomic) BOOL inlineStyle;
@property (readonly, nonatomic) UIView *bannerView;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bannerPopoverSourceRect;
@property (weak, nonatomic) id<EKEventDetailSuggestedLocationCellDelegate> delegate;

- (void)commonInit;
- (void)dismissAction;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)setEvent:(id)a0;
- (void)addAction;
- (void)_disambiguateIfNeeded;
- (void)_setIcon;
- (id)initWithInlineStyle:(BOOL)a0;

@end
