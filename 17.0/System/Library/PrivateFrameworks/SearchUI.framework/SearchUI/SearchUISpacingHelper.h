@class NSString;

@interface SearchUISpacingHelper : NSObject <NUIArrangementItem>

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (nonatomic) double compressionResistance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)idealHorizontalSpacingBetweenIcons;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (float)contentCompressionResistancePriorityForAxis:(long long)a0;
- (float)contentHuggingPriorityForAxis:(long long)a0;
- (BOOL)isLayoutSizeDependentOnPerpendicularAxis;
- (double)effectiveBaselineOffsetFromContentBottom;
- (double)effectiveFirstBaselineOffsetFromContentTop;

@end
