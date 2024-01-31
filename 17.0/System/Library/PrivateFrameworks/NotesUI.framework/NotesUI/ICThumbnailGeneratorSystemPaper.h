@interface ICThumbnailGeneratorSystemPaper : ICThumbnailGenerator

@property (class, nonatomic, readonly) struct CGSize { double x0; double x1; } chromeSize;

@property (nonatomic, readonly) void /* unknown type, empty encoding */ cache;

+ (id)chromeBackdropImageUrlFor:(id)a0;

- (void).cxx_destruct;
- (id)initWithManagedObjectContext:(id)a0;
- (void)generateThumbnailWithConfiguration:(id)a0 completion:(id /* block */)a1;
- (id)initWithManagedObjectContext:(id)a0 cache:(id)a1;
- (id)thumbnailWith:(id)a0;

@end
