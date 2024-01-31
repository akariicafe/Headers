@class PXContentFilterState;

@interface PXCuratedLibraryToggleFilterActionPerformer : PXCuratedLibraryActionPerformer

@property (readonly, nonatomic) PXContentFilterState *currentContentFilterState;

- (void)finishedUserInteractionTask;
- (BOOL)updateToContentFilterState:(id)a0;

@end
