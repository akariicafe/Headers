@class EKEvent;

@interface EKEventDetailCell : EKUITableViewCell {
    EKEvent *_event;
    BOOL _editable;
    double _lastLaidOutWidth;
    int _lastLaidOutPosition;
}

@property (retain, nonatomic) EKEvent *event;
@property (readonly, nonatomic) BOOL isEditable;

+ (id)_bodyFontAtDefaultSize;
+ (double)_scaledDistanceCalculatedFromBottomToBaseline:(double)a0;
+ (double)_scaledDistanceCalculatedFromTopFromBaseline:(double)a0;
+ (double)detailsBottomVerticalInset;
+ (double)detailsCellDefaultHeight;
+ (double)detailsPostLabelSpace;
+ (double)detailsTopVerticalInset;

- (void)layoutMarginsDidChange;
- (BOOL)update;
- (void).cxx_destruct;
- (void)layoutForWidth:(double)a0 position:(int)a1;
- (id)initWithEvent:(id)a0 editable:(BOOL)a1 style:(long long)a2;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (double)detailsLeftInset;
- (double)detailsRightInset;
- (id)initWithEvent:(id)a0 editable:(BOOL)a1;
- (BOOL)needsLayoutForWidth:(double)a0 position:(int)a1;

@end
