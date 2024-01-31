@class NSString;

@interface OCDSummary : NSObject {
    NSString *mTitle;
    NSString *mAuthor;
    NSString *mKeywords;
    NSString *mComments;
    NSString *mHyperlinkBase;
}

@property (retain) NSString *subject;
@property (retain) NSString *company;

- (id)keywords;
- (void)setKeywords:(id)a0;
- (id)author;
- (void)setAuthor:(id)a0;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:(id)a0;
- (id)comments;
- (void)setComments:(id)a0;
- (id)hyperlinkBase;
- (void)setHyperlinkBase:(id)a0;

@end
