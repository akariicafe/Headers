@protocol MKPlaceAttributionCellButtonDelegate;

@interface MKPlaceAttributionCellButton : UIButton {
    BOOL _highlighted;
}

@property (weak, nonatomic) id<MKPlaceAttributionCellButtonDelegate> buttonDelegate;

- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)isHighlighted;

@end
