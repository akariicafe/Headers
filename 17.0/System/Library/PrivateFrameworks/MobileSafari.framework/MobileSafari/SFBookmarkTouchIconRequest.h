@class WebBookmark;

@interface SFBookmarkTouchIconRequest : WBSTouchIconRequest

@property (readonly, nonatomic) WebBookmark *bookmark;

+ (id)requestWithBookmark:(id)a0 iconGenerationEnabled:(BOOL)a1;

- (id)initWithBookmark:(id)a0 iconGenerationEnabled:(BOOL)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
