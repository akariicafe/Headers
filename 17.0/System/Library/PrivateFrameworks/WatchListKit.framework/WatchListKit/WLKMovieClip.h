@class NSString, NSArray, WLKMovieClipPreviewArtwork, WLKMovieClipAsset;

@interface WLKMovieClip : NSObject

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) WLKMovieClipPreviewArtwork *previewArtwork;
@property (readonly, copy, nonatomic) NSArray *assets;
@property (readonly, nonatomic) WLKMovieClipAsset *preferredAsset;
@property (readonly, copy, nonatomic) NSString *hlsUrl;

+ (id)movieClipsWithArray:(id)a0;

- (id)init;
- (id)_init;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)preferredURL;

@end
