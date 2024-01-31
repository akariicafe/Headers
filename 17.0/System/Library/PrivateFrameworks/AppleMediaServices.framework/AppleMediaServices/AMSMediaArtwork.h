@class NSDictionary;

@interface AMSMediaArtwork : NSObject

@property (readonly, nonatomic) NSDictionary *artworkDictionary;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } artworkSize;

- (id)URLString;
- (double)height;
- (id)initWithDictionary:(id)a0;
- (double)width;
- (void).cxx_destruct;
- (id)URLWithSize:(struct CGSize { double x0; double x1; })a0 cropStyle:(id)a1 format:(id)a2;
- (id)URLWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)URLWithSize:(struct CGSize { double x0; double x1; })a0 cropStyle:(id)a1 format:(id)a2 quality:(unsigned long long)a3;
- (unsigned long long)_qualityForFormat:(id)a0;
- (struct CGColor { } *)colorWithKind:(id)a0;

@end
