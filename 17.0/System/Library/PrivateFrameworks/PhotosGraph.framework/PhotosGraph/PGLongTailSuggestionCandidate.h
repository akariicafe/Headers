@class PHAsset;

@interface PGLongTailSuggestionCandidate : NSObject

@property (readonly, nonatomic) PHAsset *asset;
@property (readonly, nonatomic) unsigned long long score;

- (void).cxx_destruct;
- (id)initWithAsset:(id)a0 score:(unsigned long long)a1;
- (BOOL)isValidBeforeKeyItemFilterWithMeNodeLocalIdentifier:(id)a0;
- (BOOL)isValidWithMeNodeLocalIdentifier:(id)a0;

@end
