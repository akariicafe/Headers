@class NSArray, NSString, PXContentSyndicationConfigurationProvider, PHPhotoLibrary;

@interface PXContentFilterState : NSObject <NSCopying, PXFilterState>

@property (readonly, nonatomic) long long ruleCount;
@property (readonly, nonatomic) BOOL hasRules;
@property (readonly, nonatomic) PXContentSyndicationConfigurationProvider *contentSyndicationConfigurationProvider;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (nonatomic) BOOL includeSharedWithYou;
@property (nonatomic) BOOL showOnlySharedWithYou;
@property (nonatomic) BOOL saved;
@property (nonatomic) BOOL unsaved;
@property (nonatomic) BOOL favorite;
@property (nonatomic) BOOL edited;
@property (nonatomic) BOOL image;
@property (nonatomic) BOOL video;
@property (copy, nonatomic) NSArray *keywords;
@property (copy, nonatomic) NSArray *uuids;
@property (nonatomic) BOOL showOnlySentICloudLinks;
@property (nonatomic) BOOL showOnlyReceivedICloudLinks;
@property (readonly, nonatomic) BOOL isFiltering;
@property (readonly, nonatomic) NSString *localizedDescription;
@property (readonly, nonatomic) NSString *localizedFooterDescription;

+ (id)defaultFilterStateForPhotoLibrary:(id)a0;
+ (id)defaultFilterStateForContainerCollection:(id)a0 photoLibrary:(id)a1;

- (id)init;
- (unsigned long long)hash;
- (id)predicateForUseCase:(unsigned long long)a0;
- (id)description;
- (void)_checkDataSourceType:(id /* block */)a0;
- (id)initWithPhotoLibrary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isContentFilterActive:(long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
