@class NSDate, NSString, NSArray, PXCMMActionManager, PXAssetsDataSourceManager, PXUIMediaProvider, NSDictionary, PXRecipient, PXCMMSendBackSuggestionSource, PXPeopleSuggestionsDataSourceManager;
@protocol PXUIImageProvider, PXDisplayAsset;

@interface PXCMMContext : NSObject

@property (readonly, nonatomic) PXCMMActionManager *actionManager;
@property (readonly, nonatomic) PXAssetsDataSourceManager *dataSourceManager;
@property (readonly, nonatomic) PXUIMediaProvider *mediaProvider;
@property (readonly, nonatomic) unsigned long long activityType;
@property (nonatomic) unsigned long long sourceType;
@property (retain, nonatomic) PXPeopleSuggestionsDataSourceManager *peopleSuggestionsPreviewDataSourceManager;
@property (retain, nonatomic) PXPeopleSuggestionsDataSourceManager *peopleSuggestionsDataSourceManager;
@property (copy, nonatomic) NSString *originalTitle;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (nonatomic) BOOL hideActionMenu;
@property (copy, nonatomic) NSDictionary *assetPreparationOptions;
@property (retain, nonatomic) PXCMMSendBackSuggestionSource *sendBackSuggestionSource;
@property (retain, nonatomic) id<PXDisplayAsset> posterAsset;
@property (retain, nonatomic) id<PXUIImageProvider> posterMediaProvider;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (nonatomic) long long photosCount;
@property (nonatomic) long long videosCount;
@property (nonatomic) long long count;
@property (copy, nonatomic) NSArray *recipients;
@property (copy, nonatomic) PXRecipient *originatorRecipient;
@property (nonatomic) unsigned long long numberOfReceivedAssets;
@property (nonatomic) double ppt_delay;
@property (nonatomic) BOOL ppt_presentComposeRecipientView;
@property (nonatomic) BOOL ppt_scrollComposeRecipientsView;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (id)createSession;
- (id)initWithAssetsDataSourceManager:(id)a0 mediaProvider:(id)a1 activityType:(unsigned long long)a2;

@end
