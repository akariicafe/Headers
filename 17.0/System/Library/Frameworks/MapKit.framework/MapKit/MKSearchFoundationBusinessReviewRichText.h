@interface MKSearchFoundationBusinessReviewRichText : MKSearchFoundationRichText

@property (getter=isReviewResolved) BOOL reviewResolved;

- (BOOL)isRichTextResolved;
- (void)resolveReviewStringWithProviderNameByMapItem:(id)a0 lines:(id)a1 temporaryReviewString:(id)a2;
- (void)resolveReviewStringWithProviderNameNotFoundByMapItem:(id)a0 lines:(id)a1 temporaryReviewString:(id)a2;

@end
