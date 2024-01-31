@class NSString, PXVideoContentProviderLoadingResult;

@interface PXSimpleVideoContentProvider : PXVideoContentProvider {
    PXVideoContentProviderLoadingResult *_loadingResult;
    NSString *_contentIdentifier;
    double _loadingProgress;
}

- (void)setLoadingProgress:(double)a0;
- (id)init;
- (double)loadingProgress;
- (id)description;
- (void).cxx_destruct;
- (id)contentIdentifier;
- (void)beginLoadingWithPriority:(long long)a0;
- (id)initWithPlayerItem:(id)a0 contentIdentifier:(id)a1;
- (id)loadingResult;
- (void)setLoadingResult:(id)a0;

@end
