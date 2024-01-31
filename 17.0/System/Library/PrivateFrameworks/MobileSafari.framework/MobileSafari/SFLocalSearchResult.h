@class NSURL, SFText;

@interface SFLocalSearchResult : SFSearchResult {
    NSURL *_url;
    SFText *_title;
}

- (void)setUrl:(id)a0;
- (void).cxx_destruct;
- (id)title;
- (id)url;
- (void)setTitle:(id)a0;
- (id)initWithCompletionMatch:(id)a0;

@end
