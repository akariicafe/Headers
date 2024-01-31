@interface _PXStoryScrubberClipViewConfiguration : PXGFocusEffectViewConfiguration

@property (nonatomic) long long segmentIdentifier;
@property (nonatomic) BOOL isCurrent;
@property (nonatomic) BOOL shouldAdjustContent;

- (unsigned long long)hash;
- (id)initWithConfiguration:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
