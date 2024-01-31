@class NSDictionary, NSString;

@interface SVAVURLAssetFactory : NSObject <SVAVURLAssetFactory>

@property (readonly, copy, nonatomic) NSDictionary *options;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithOptions:(id)a0;
- (id)createURLAssetWithURL:(id)a0;

@end
