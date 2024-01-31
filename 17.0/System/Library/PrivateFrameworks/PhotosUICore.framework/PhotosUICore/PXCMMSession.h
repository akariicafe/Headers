@class NSString, PXCMMViewModel, PXCMMActionManager, PXAssetsDataSourceManager, PXUIMediaProvider, NSDictionary, NSSet, PXPeopleSuggestionsDataSourceManager, PXCMMSendBackSuggestionSource, PXMomentShareStatus;
@protocol PXAssetImportStatusManager;

@interface PXCMMSession : NSObject <PXTapToRadar>

@property (readonly, nonatomic) NSDictionary *diagnosticDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) PXAssetsDataSourceManager *dataSourceManager;
@property (readonly, nonatomic) PXUIMediaProvider *mediaProvider;
@property (readonly, nonatomic) PXPeopleSuggestionsDataSourceManager *peopleSuggestionsPreviewDataSourceManager;
@property (readonly, nonatomic) PXPeopleSuggestionsDataSourceManager *peopleSuggestionsDataSourceManager;
@property (readonly, nonatomic) PXCMMSendBackSuggestionSource *sendBackSuggestionSource;
@property (readonly, nonatomic) PXCMMActionManager *actionManager;
@property (readonly, nonatomic) unsigned long long activityType;
@property (readonly, nonatomic) unsigned long long sourceType;
@property (readonly, nonatomic) BOOL hideActionMenu;
@property (readonly, nonatomic) NSDictionary *preparationOptionsPerAsset;
@property (readonly, nonatomic) NSSet *notificationSuppressionContexts;
@property (readonly, nonatomic) PXCMMViewModel *viewModel;
@property (readonly, nonatomic) id<PXAssetImportStatusManager> importStatusManager;
@property (readonly, nonatomic) NSString *importSessionID;
@property (readonly, nonatomic) PXMomentShareStatus *momentShareStatus;
@property (nonatomic) double ppt_delay;
@property (readonly, nonatomic) BOOL ppt_presentComposeRecipientView;
@property (readonly, nonatomic) BOOL ppt_scrollComposeRecipientsView;

+ (id)new;

@end
