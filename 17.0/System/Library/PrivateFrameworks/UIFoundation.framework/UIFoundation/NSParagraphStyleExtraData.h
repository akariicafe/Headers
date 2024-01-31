@class NSArray, NSString;

@interface NSParagraphStyleExtraData : NSObject {
    double _lineHeightMultiple;
    double _paragraphSpacingBefore;
    double _hyphenationFactor;
    double _tighteningFactor;
    long long _headerLevel;
    NSArray *_textBlocks;
    NSArray *_textLists;
    unsigned long long _lineBoundsOptions;
    unsigned long long _lineBreakStrategy;
    BOOL _usesDefaultHyphenation;
    BOOL _spansAllLines;
    BOOL _fullyJustified;
    BOOL _alignmentFollowsWritingDirection;
    long long _compositionLanguage;
    NSArray *_presentationIntents;
    long long _listIntentOrdinal;
    NSString *_codeBlockIntentLanguageHint;
    long long _horizontalAlignment;
}

- (void)dealloc;

@end
