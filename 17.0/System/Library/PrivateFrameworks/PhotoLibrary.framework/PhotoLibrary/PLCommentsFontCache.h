@class UIFontDescriptor, UIFont;

@interface PLCommentsFontCache : NSObject {
    UIFontDescriptor *__shortCaptionFontDescriptor;
    UIFontDescriptor *__emphasizedShortCaptionFontDescriptor;
    UIFontDescriptor *__shortSubheadlineFontDescriptor;
    UIFontDescriptor *__bodyFontDescriptor;
    UIFontDescriptor *__emphasizedBodyFontDescriptor;
    UIFontDescriptor *__shortBodyFontDescriptor;
}

@property (readonly, nonatomic) UIFont *youLikeFont;
@property (readonly, nonatomic) UIFont *likeFont;
@property (readonly, nonatomic) UIFont *commentTextFont;
@property (readonly, nonatomic) UIFont *commentAttributionDateFont;
@property (readonly, nonatomic) UIFont *commentAttributionNameFont;
@property (readonly, nonatomic) UIFont *commentEntryFont;
@property (readonly, nonatomic) UIFont *commentSendButtonFont;

+ (id)sharedCache;

- (id)init;
- (void)dealloc;
- (void)_invalidateCache;
- (id)_shortSubheadlineFontDescriptor;
- (id)_bodyFontDescriptor;
- (void)_contentSizesDidChange:(id)a0;
- (id)_emphasizedBodyFontDescriptor;
- (id)_emphasizedShortCaptionFontDescriptor;
- (id)_shortBodyFontDescriptor;
- (id)_shortCaptionFontDescriptor;

@end
