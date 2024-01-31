@class NSString, UIImage, GEOSearchCategory;

@interface MUBrowseCategoryItem : NSObject

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) GEOSearchCategory *searchCategory;

- (void).cxx_destruct;
- (id)imageWithSearchCategory:(id)a0 nightMode:(BOOL)a1;
- (id)initWithCategory:(id)a0 nightMode:(BOOL)a1;

@end
