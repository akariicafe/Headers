@class SearchUIImage;

@interface SearchUITLKImage : TLKImage

@property (retain) SearchUIImage *searchUIImage;

- (double)aspectRatio;
- (void).cxx_destruct;
- (void)loadImageWithScale:(double)a0 isDarkStyle:(BOOL)a1 completionHandler:(id /* block */)a2;
- (id)initWithSearchUIImage:(id)a0;

@end
