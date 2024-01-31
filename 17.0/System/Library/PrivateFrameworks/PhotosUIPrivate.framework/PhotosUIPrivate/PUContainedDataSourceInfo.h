@class PUAssetsDataSource;

@interface PUContainedDataSourceInfo : NSObject

@property (retain, nonatomic) PUAssetsDataSource *assetsDataSource;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } externalSections;

- (id)description;
- (void).cxx_destruct;

@end
