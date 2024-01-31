@class NSString, NSOrderedSet, NSArray, PLManagedAsset, NSDate;

@interface PLSimpleAlbum : NSObject <PLAssetContainer> {
    NSString *_title;
    NSOrderedSet *_assets;
}

@property (readonly, retain, nonatomic) NSString *uuid;
@property (readonly, retain, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *localizedTitle;
@property (readonly, retain, nonatomic) NSOrderedSet *assets;
@property (readonly, nonatomic) unsigned long long approximateCount;
@property (readonly, nonatomic) unsigned long long assetsCount;
@property (readonly, nonatomic) unsigned long long photosCount;
@property (readonly, nonatomic) unsigned long long videosCount;
@property (readonly, nonatomic) BOOL isEmpty;
@property (retain, nonatomic) PLManagedAsset *keyAsset;
@property (retain, nonatomic) PLManagedAsset *secondaryKeyAsset;
@property (retain, nonatomic) PLManagedAsset *tertiaryKeyAsset;
@property (readonly, nonatomic) BOOL canShowComments;
@property (readonly, nonatomic) BOOL canShowAvalancheStacks;
@property (readonly, copy, nonatomic) NSArray *localizedLocationNames;
@property (readonly, retain, nonatomic) NSDate *startDate;
@property (readonly, retain, nonatomic) NSDate *endDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canPerformEditOperation:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 assets:(id)a1;
- (long long)_countOfAssetType:(short)a0;

@end
