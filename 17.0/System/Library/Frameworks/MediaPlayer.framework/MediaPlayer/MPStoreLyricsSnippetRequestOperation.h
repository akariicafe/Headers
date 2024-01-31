@class MPStoreLyricsSnippetURLComponents;

@interface MPStoreLyricsSnippetRequestOperation : MPAsyncOperation

@property (retain, nonatomic) MPStoreLyricsSnippetURLComponents *snippetURL;
@property (copy, nonatomic) id /* block */ responseHandler;

- (void)execute;
- (void).cxx_destruct;
- (void)finishWithError:(id)a0;

@end
