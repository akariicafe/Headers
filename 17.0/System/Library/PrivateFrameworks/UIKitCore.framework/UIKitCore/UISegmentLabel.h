@class UILabel;

@interface UISegmentLabel : UILabel

@property (weak, nonatomic) UILabel *associatedLabel;

- (id)init;
- (id)_associatedScalingLabel;
- (id)_disabledFontColor;
- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (void).cxx_destruct;
- (id)_parentSegment;

@end
