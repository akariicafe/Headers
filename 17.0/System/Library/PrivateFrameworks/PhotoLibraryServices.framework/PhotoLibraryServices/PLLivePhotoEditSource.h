@class PLVideoEditSource, PLEditSource;

@interface PLLivePhotoEditSource : PLEditSource

@property (readonly, nonatomic) PLEditSource *photoEditSource;
@property (readonly, nonatomic) PLVideoEditSource *videoEditSource;

+ (id)livePhotoSourceWithPhotoURL:(id)a0 videoComplementURL:(id)a1;

- (void).cxx_destruct;
- (id)_initWithPhotoSource:(id)a0 videoComplement:(id)a1;
- (id)initWithPhotoSource:(id)a0 videoComplement:(id)a1;
- (id)initWithSubstandardPhotoSource:(id)a0 videoComplement:(id)a1;

@end
