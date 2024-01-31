@class NSString;

@interface SBApplicationPlaceholder : SBHProxiedApplicationPlaceholder <FBSApplicationPlaceholderObserver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)pause;
- (BOOL)resume;
- (BOOL)cancel;
- (BOOL)prioritize;
- (void)_reloadThumbnailImage;

@end
