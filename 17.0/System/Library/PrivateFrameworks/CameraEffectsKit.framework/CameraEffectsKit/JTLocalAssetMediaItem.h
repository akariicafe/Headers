@class NSString, NSURL;

@interface JTLocalAssetMediaItem : JFXMediaItem

@property (copy, nonatomic) NSString *localFileName;
@property (retain, nonatomic) NSURL *localFileURL;

- (id)initWithURL:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)info;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)canSaveToCameraRoll;
- (id)initWithInfo:(id)a0 delegate:(id)a1;

@end
