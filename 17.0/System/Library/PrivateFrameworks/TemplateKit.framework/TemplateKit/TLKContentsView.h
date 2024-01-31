@class TLKLabel, NSMutableArray;

@interface TLKContentsView : TLKStackView

@property (retain, nonatomic) TLKLabel *titleLabel;
@property (retain, nonatomic) NSMutableArray *detailsLabels;

+ (id)detailsLabel;

- (id)init;
- (void).cxx_destruct;
- (void)updateWithTitle:(id)a0 contents:(id)a1;

@end
