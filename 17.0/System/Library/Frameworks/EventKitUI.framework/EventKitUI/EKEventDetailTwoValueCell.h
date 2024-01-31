@class UILabel;

@interface EKEventDetailTwoValueCell : EKEventDetailCell {
    int _style;
    UILabel *_titleView;
    UILabel *_valueView;
    UILabel *_value2View;
    int _twoValueCellStyle;
}

@property (readonly, nonatomic) unsigned int visibleItems;

- (id)titleView;
- (BOOL)update;
- (double)_layoutForWidth:(double)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)layoutForWidth:(double)a0 position:(int)a1;
- (id)valueView;
- (id)initWithEvent:(id)a0 editable:(BOOL)a1 platformStyle:(int)a2;
- (int)twoValueCellStyle;
- (id)value2View;

@end
