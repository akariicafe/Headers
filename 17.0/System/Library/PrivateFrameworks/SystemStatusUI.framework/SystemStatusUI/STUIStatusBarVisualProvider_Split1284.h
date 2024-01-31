@class NSString;

@interface STUIStatusBarVisualProvider_Split1284 : STUIStatusBarVisualProvider_FixedSplit <STUIStatusBarVisualProvider_CustomSplit>

@property (class, readonly) struct CGSize { double x0; double x1; } notchSize;
@property (class, readonly) double nativeDisplayWidth;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)pillCenteringOffset;
+ (double)trailingEdgeInsetLeadingAdjustment;

- (double)bottomLeadingTopOffset;

@end
