@class NSURL, ENRegion;

@interface ENDownloadEndpoint : NSObject

@property (readonly, nonatomic) double downloadInterval;
@property (readonly, nonatomic) BOOL enabled;
@property (readonly, copy, nonatomic) ENRegion *region;
@property (readonly, copy, nonatomic) NSURL *serverBaseURL;
@property (readonly, copy, nonatomic) NSURL *serverIndexURL;

- (void).cxx_destruct;
- (id)initWithBaseURL:(id)a0 indexURL:(id)a1 interval:(double)a2 enabled:(BOOL)a3 region:(id)a4;
- (id)serverURLForFileWithRelativePath:(id)a0;

@end
