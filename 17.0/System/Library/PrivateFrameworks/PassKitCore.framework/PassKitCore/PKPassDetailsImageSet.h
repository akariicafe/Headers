@class PKImage;

@interface PKPassDetailsImageSet : PKPassImageSet

@property (retain, nonatomic) PKImage *cardHolderPicture;

+ (BOOL)supportsSecureCoding;
+ (BOOL)shouldCache;
+ (long long)imageSetType;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDisplayProfile:(id)a0 fileURL:(id)a1 screenScale:(double)a2 suffix:(id)a3;
- (void)preheatImages;

@end
