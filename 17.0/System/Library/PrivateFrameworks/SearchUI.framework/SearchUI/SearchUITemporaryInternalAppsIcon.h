@class SFSearchResult;

@interface SearchUITemporaryInternalAppsIcon : SBLeafIcon

@property (readonly, nonatomic) unsigned long long variant;
@property (readonly, nonatomic) SFSearchResult *searchResult;

+ (BOOL)canGenerateIconsInBackground;

- (id)displayNameForLocation:(id)a0;
- (void).cxx_destruct;
- (id)iconImageWithInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a0;
- (id)initWithResult:(id)a0 variant:(unsigned long long)a1;

@end
