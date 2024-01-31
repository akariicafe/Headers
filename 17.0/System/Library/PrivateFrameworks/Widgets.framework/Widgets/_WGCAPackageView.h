@class NSURL, NSString;

@interface _WGCAPackageView : _UICAPackageView

@property (copy, nonatomic) NSURL *archiveURL;
@property (readonly, copy, nonatomic) NSString *snapshotIdentifier;

+ (void)loadPackageViewWithContentsOfURL:(id)a0 publishedObjectViewClassMap:(id)a1 completion:(id /* block */)a2;

- (void)_setContinuousCornerRadius:(double)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)_supportsPushingBottomCornerRadiusToSubviews:(double)a0;

@end
