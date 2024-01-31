@class NSString, PXStoryTVCellSpec;

@interface PXStoryTVWatchNextCellConfiguration : PXGFocusEffectViewConfiguration

@property (retain, nonatomic) PXStoryTVCellSpec *spec;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (nonatomic) long long countdownValue;
@property (nonatomic) long long maximumCountdownValue;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
