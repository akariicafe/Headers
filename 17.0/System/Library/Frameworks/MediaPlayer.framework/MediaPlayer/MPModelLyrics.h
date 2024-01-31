@class NSString;

@interface MPModelLyrics : MPModelObject

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *TTML;
@property (nonatomic) BOOL hasStoreLyrics;
@property (nonatomic) BOOL hasLibraryLyrics;
@property (nonatomic) BOOL hasTimeSyncedLyrics;

+ (id)__hasLibraryLyrics_KEY;
+ (id)__text_KEY;
+ (void)__MPModelPropertyLyricsHasStoreLyrics__MAPPING_MISSING__;
+ (void)__MPModelPropertyLyricsText__MAPPING_MISSING__;
+ (void)__MPModelPropertyLyricsHasLibraryLyrics__MAPPING_MISSING__;
+ (void)__MPModelPropertyLyricsHasTimeSyncedLyrics__MAPPING_MISSING__;
+ (void)__MPModelPropertyLyricsTTML__MAPPING_MISSING__;
+ (id)__hasTimeSyncedLyrics_KEY;
+ (id)__TTML_KEY;
+ (id)__hasStoreLyrics_KEY;

@end
