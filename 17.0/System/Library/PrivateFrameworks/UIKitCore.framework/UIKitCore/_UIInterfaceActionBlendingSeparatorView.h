@class NSString, _UIInterfaceActionSeparatorConstraintController;

@interface _UIInterfaceActionBlendingSeparatorView : _UIBlendingHighlightView <UIInterfaceActionVisualSeparatorDisplaying, UIInterfaceActionVisualSectionSeparatorDisplaying>

@property (readonly, retain, nonatomic) _UIInterfaceActionSeparatorConstraintController *separatorViewConstraints;
@property (nonatomic) double constantAxisDimension;
@property (nonatomic) double horizontalLineLeadingInset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)updateConstraints;
- (void).cxx_destruct;
- (void)_updateContentDirectionalInsets;
- (long long)constantSizedAxis;
- (id)initWithTopLevelFilters:(id)a0 compositingColors:(id)a1 compositingFilterModes:(id)a2;
- (void)setConstantSizedAxis:(long long)a0;

@end
