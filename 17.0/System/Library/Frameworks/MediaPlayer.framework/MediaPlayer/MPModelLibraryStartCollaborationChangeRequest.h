@class NSOperationQueue, MPModelPlaylist;

@interface MPModelLibraryStartCollaborationChangeRequest : NSObject <NSCopying> {
    NSOperationQueue *_operationQueue;
}

@property (class, readonly, nonatomic) NSOperationQueue *sharedOperationQueue;

@property (retain, nonatomic) MPModelPlaylist *playlistToConvert;
@property (nonatomic) long long collaborationSharingMode;

- (void)performWithResponseHandler:(id /* block */)a0;
- (id)newOperationWithResponseHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
