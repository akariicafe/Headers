@interface SearchUIBonusSPIAppTopHitAsyncSectionLoader : SearchUIAppTopHitAsyncSectionLoader

+ (BOOL)supportsSectionModel:(id)a0;

- (void)fetchCardSectionsWithCompletionHandler:(id /* block */)a0;
- (id)imageFromContexualActionIcon:(id)a0;

@end
