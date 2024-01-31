@class NSArray, CSSearchableIndex, PLPhotoLibrary, NSString;
@protocol PLSpotlightDonationManagerSignpostDelegate;

@interface PLSpotlightDonationOperation : PLSpotlightAsyncOperation

@property (readonly, nonatomic) CSSearchableIndex *searchableIndex;
@property (readonly, copy, nonatomic) NSArray *searchableItems;
@property (readonly, nonatomic) PLPhotoLibrary *photoLibrary;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (weak, nonatomic) id<PLSpotlightDonationManagerSignpostDelegate> signpostDelegate;

- (void)main;
- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)a0 spotlightSearchableIndex:(id)a1 searchableItems:(id)a2 bundleIdentifier:(id)a3;

@end
