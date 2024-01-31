@class MPStoreLyricsSnippetURLComponents, NSOperation;

@interface LPAppleMusicLyricExcerptFetcher : LPFetcher {
    id /* block */ _completionHandler;
    NSOperation *_operation;
}

@property (retain, nonatomic) MPStoreLyricsSnippetURLComponents *lyricComponents;

- (id)init;
- (void).cxx_destruct;
- (void)cancel;
- (void)completedWithLyrics:(id)a0;
- (void)fetchWithConfiguration:(id)a0 completionHandler:(id /* block */)a1;

@end
