@interface WFPodcastUtilities : NSObject

+ (void)getPodcastsFromLibraryFetchingDetailsFromServer:(BOOL)a0 withCompletion:(id /* block */)a1;
+ (void *)createLocalPlayerPath;
+ (struct _MRSystemAppPlaybackQueue { } *)createPlaybackQueueWithURLs:(id)a0 setImmediatePlayback:(BOOL)a1;
+ (void *)createPlayerPathForOrigin:(void *)a0;
+ (void)createPreferredPlayerPathWithCompletion:(id /* block */)a0;
+ (id)generatePlaybackQueueURL:(id)a0 withQueryDictionary:(id)a1;

@end
