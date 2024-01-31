@class NSDictionary, NSString, FCHeadlineThumbnail;
@protocol FCChannelProviding;

@interface FCLocalArticleHeadline : FCHeadline {
    BOOL _webEmbedsEnabled;
    FCHeadlineThumbnail *_thumbnail;
}

@property (readonly, nonatomic) NSDictionary *dictionary;
@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) id<FCChannelProviding> channel;

- (struct CGSize { double x0; double x1; })thumbnailSize;
- (id)videoURL;
- (id)iAdCategories;
- (BOOL)isDraft;
- (id)sourceChannel;
- (id)iAdKeywords;
- (id)blockedStorefrontIDs;
- (id)topicIDs;
- (BOOL)isLocalDraft;
- (id)publishDate;
- (id)sourceName;
- (BOOL)hasThumbnail;
- (id)primaryAudience;
- (id)allowedStorefrontIDs;
- (id)contentURL;
- (id)shortExcerpt;
- (id)accessoryText;
- (unsigned long long)contentType;
- (id)articleID;
- (BOOL)isFeatureCandidate;
- (id)thumbnailAssetHandle;
- (id)lastModifiedDate;
- (BOOL)isDeleted;
- (id)identifier;
- (id)thumbnail;
- (BOOL)useTransparentNavigationBar;
- (BOOL)isSponsored;
- (id)contentWithContext:(id)a0;
- (void).cxx_destruct;
- (id)iAdSectionIDs;
- (id)title;
- (BOOL)webEmbedsEnabled;
- (double)videoDuration;
- (id)surfacedByBinID;
- (id)initWithDictionary:(id)a0 path:(id)a1 channel:(id)a2;
- (BOOL)isPremium;
- (id)localDraftPath;

@end
