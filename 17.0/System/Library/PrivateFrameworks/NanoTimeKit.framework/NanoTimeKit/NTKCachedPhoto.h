@class UIImage, NTKPhoto;

@interface NTKCachedPhoto : NSObject

@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) NTKPhoto *photo;
@property (readonly, nonatomic) long long index;

- (BOOL)load;
- (void).cxx_destruct;
- (id)initWithPhoto:(id)a0;
- (id)initWithPhoto:(id)a0 index:(long long)a1;

@end
