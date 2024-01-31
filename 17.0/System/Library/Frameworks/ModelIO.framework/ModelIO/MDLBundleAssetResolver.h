@class NSString, NSBundle;

@interface MDLBundleAssetResolver : NSObject <MDLAssetResolver> {
    NSBundle *_bundle;
}

@property (copy, nonatomic) NSString *path;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
