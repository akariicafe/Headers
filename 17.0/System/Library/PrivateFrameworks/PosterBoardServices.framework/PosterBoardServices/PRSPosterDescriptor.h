@class PRSPosterPath, NSString, NSURL;
@protocol BSInvalidatable;

@interface PRSPosterDescriptor : NSObject {
    id<BSInvalidatable> _pathValidityExtension;
}

@property (readonly, nonatomic) PRSPosterPath *_path;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *role;
@property (readonly, copy, nonatomic) NSURL *assetDirectory;

- (id)_initWithPath:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
- (id)role;
- (id)identifier;
- (id)loadUserInfoWithError:(out id *)a0;
- (id)loadGalleryOptionsWithError:(out id *)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)assetDirectory;

@end
