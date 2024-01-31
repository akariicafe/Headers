@class NSString;

@interface VUIDocumentContextDataMovieBundle : VUIDocumentContextData

@property (readonly, copy, nonatomic) NSString *movieBundleID;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)jsonData;
- (id)initWithMovieBundleID:(id)a0;

@end
