@class NSString;

@interface SSPhotosFromAppSectionBuilder : SSPhotosSectionBuilder

@property (retain, nonatomic) NSString *appBundleId;

+ (id)supportedBundleIds;

- (void).cxx_destruct;
- (void)setSection:(id)a0;
- (id)buildButtonItem;
- (long long)maxCardSections;
- (id)buildTitle;

@end
