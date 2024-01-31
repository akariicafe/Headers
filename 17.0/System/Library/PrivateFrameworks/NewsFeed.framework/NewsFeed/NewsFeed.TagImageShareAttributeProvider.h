@interface NewsFeed.TagImageShareAttributeProvider : NSObject <NETagImageShareAttributeProviderType>

- (id)init;
- (void)createShareSportsEventImageFor:(id)a0 size:(struct CGSize { double x0; double x1; })a1 logoWidth:(double)a2 completion:(id /* block */)a3;
- (void)createSportsShareImageFor:(id)a0 completion:(id /* block */)a1;
- (id)mySportsShareImageFor:(id)a0;
- (id)shareImageFor:(id)a0;

@end
