@class NSString, NSArray, NSSet, NSDate, PHAssetCollection, PHFetchResult;
@protocol NSCopying, NSObject;

@interface PXSharedLibraryAggregateSharingSuggestionContainer : NSObject <_PXSharedLibrarySharingSuggestionContainer> {
    PHFetchResult *_sharingSuggestions;
    NSString *_px_sl_title;
}

@property (readonly, nonatomic) NSDate *aggregateBeforeDate;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } aggregationRange;
@property (readonly, nonatomic) id<NSCopying, NSObject> px_sl_identifier;
@property (readonly, nonatomic) NSString *px_sl_title;
@property (readonly, nonatomic) NSArray *px_sl_containedSharingSuggestions;
@property (readonly, nonatomic) NSSet *px_sl_containedSharingSuggestionObjectIDs;
@property (readonly, nonatomic) PHAssetCollection *px_sl_containerCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSharingSuggestions:(id)a0 aggregateBeforeDate:(id)a1;
- (id)px_sl_fetchAssetCollections;
- (void)px_sl_getKeyAsset:(id *)a0 suggestedDate:(id *)a1 locations:(id *)a2;

@end
