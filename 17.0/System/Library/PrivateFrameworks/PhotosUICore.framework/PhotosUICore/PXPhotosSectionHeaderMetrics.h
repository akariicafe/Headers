@interface PXPhotosSectionHeaderMetrics : NSObject {
    double _cachedHeights[4];
}

@property (class, readonly) PXPhotosSectionHeaderMetrics *sharedMetrics;

- (void)_contentSizeCategoryDidChangeNotification:(id)a0;
- (id)init;
- (void)_invalidateCache;
- (double)accessibilitySectionHeaderHeightForStyle:(long long)a0 width:(double)a1 actionButton:(BOOL)a2 disclosure:(BOOL)a3 title:(id)a4 startDate:(id)a5 endDate:(id)a6 locations:(id)a7 actionButtonSpec:(id)a8;
- (double)sectionHeaderHeightForStyle:(long long)a0 hasTitle:(BOOL)a1 hasDates:(BOOL)a2 hasLocation:(BOOL)a3;

@end
