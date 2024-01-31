@class NSURL;

@interface PBFPosterGalleryLayoutPersistence : NSObject

@property (readonly, copy, nonatomic) NSURL *url;

- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (id)loadNewestUsableGalleryLayoutReturningError:(out id *)a0;
- (id)loadNewestUsableGalleryLayoutReturningPersistenceDate:(out id *)a0 purgeableGalleryLayoutURLs:(out id *)a1 error:(out id *)a2;
- (BOOL)saveGalleryLayout:(id)a0 returningPersistenceDate:(out id *)a1 error:(out id *)a2;

@end
