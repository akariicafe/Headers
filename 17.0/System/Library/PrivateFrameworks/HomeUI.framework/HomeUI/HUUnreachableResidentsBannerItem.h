@interface HUUnreachableResidentsBannerItem : HUBannerItem

@property (nonatomic) BOOL forceHidden;

- (BOOL)_hasPotentialResidentsConfiguring;
- (id)_subclass_updateWithOptions:(id)a0;

@end
