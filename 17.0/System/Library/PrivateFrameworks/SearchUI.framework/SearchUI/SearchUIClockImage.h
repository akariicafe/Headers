@class SFClockImage;

@interface SearchUIClockImage : SearchUIAppIconImage

@property (retain) SFClockImage *sfImage;

- (BOOL)isEqual:(id)a0;
- (void)loadImageWithScale:(double)a0 isDarkStyle:(BOOL)a1 completionHandler:(id /* block */)a2;
- (id)initWithClockImage:(id)a0 variant:(unsigned long long)a1;

@end
