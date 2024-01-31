@class NSURL;

@interface VisionCoreE5RTModelSource : NSObject <NSCopying>

@property (readonly, nonatomic) NSURL *E5ModelFileURL;
@property (readonly, nonatomic) NSURL *URL;

+ (BOOL)isModelSourceURL:(id)a0;
+ (id)modelSourceFromURL:(id)a0 error:(id *)a1;
+ (Class)_classForModelAtURL:(id)a0 error:(id *)a1;

- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
