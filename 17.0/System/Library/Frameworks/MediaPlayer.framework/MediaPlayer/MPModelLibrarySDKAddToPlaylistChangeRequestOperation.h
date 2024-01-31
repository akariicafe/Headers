@class MPModelLibrarySDKAddToPlaylistChangeRequest;

@interface MPModelLibrarySDKAddToPlaylistChangeRequestOperation : MPAsyncOperation

@property (copy, nonatomic) MPModelLibrarySDKAddToPlaylistChangeRequest *request;
@property (copy, nonatomic) id /* block */ responseHandler;

- (void)execute;
- (void).cxx_destruct;

@end
