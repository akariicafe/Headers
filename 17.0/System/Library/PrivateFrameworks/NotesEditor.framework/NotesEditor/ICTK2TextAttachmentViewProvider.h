@class ICSearchResultRegexMatchFinder;
@protocol NSTextLocation;

@interface ICTK2TextAttachmentViewProvider : NSTextAttachmentViewProvider

@property (retain, nonatomic) id<NSTextLocation> updatedLocationForRecycledViewProvider;
@property (retain, nonatomic) ICSearchResultRegexMatchFinder *highlightPatternRegexFinder;

- (id)location;
- (void)loadView;
- (void).cxx_destruct;
- (void)setLocation:(id)a0;
- (id)initWithTextAttachment:(id)a0 parentView:(id)a1 textLayoutManager:(id)a2 location:(id)a3;

@end
