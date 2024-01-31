@class NSAttributedString;

@interface MSVLyricsTextElement : MSVLyricsElement

@property (copy, nonatomic) NSAttributedString *lyricsText;
@property (nonatomic) BOOL keepParentheses;

- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
