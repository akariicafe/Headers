@class NSString;

@interface _NUIFlowArrangementDummyItem : NSObject <NUIArrangementItem>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (float)contentCompressionResistancePriorityForAxis:(long long)a0;
- (float)contentHuggingPriorityForAxis:(long long)a0;
- (BOOL)isLayoutSizeDependentOnPerpendicularAxis;
- (double)effectiveBaselineOffsetFromContentBottom;
- (double)effectiveFirstBaselineOffsetFromContentTop;

@end
