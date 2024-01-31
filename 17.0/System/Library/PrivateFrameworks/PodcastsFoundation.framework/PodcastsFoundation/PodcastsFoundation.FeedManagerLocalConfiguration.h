@class _TtC18PodcastsFoundation29FeedManagerLocalConfiguration;

@interface PodcastsFoundation.FeedManagerLocalConfiguration : NSObject {
    void /* unknown type, empty encoding */ deltaNumberOfEpisodesToRequestPerPage;
    void /* unknown type, empty encoding */ _supportsBatchInsertion;
    void /* unknown type, empty encoding */ _workQueueConcurrent;
}

@property (class, nonatomic, readonly) _TtC18PodcastsFoundation29FeedManagerLocalConfiguration *platformSpecificConfiguration;

@property (nonatomic, readonly) BOOL supportsBatchInsertion;
@property (nonatomic, readonly) BOOL workQueueConcurrent;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ timeoutIntervalForResource;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ concurrentDeltaUpdateLimit;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ concurrentBootstrapUpdateLimit;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ concurrentRSSUpdateLimit;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ useBackgroundFetchForFeedDownloads;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ keepsFeedFileInTempDirAfterDownload;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ usesCleanEpisodeTitles;

- (id)init;
- (void).cxx_destruct;

@end
