@class NSOperationQueue, MPModelPlaylist;

@interface MPModelLibraryEndCollaborationChangeRequest : NSObject <NSCopying> {
    NSOperationQueue *_operationQueue;
}

@property (class, readonly, nonatomic) NSOperationQueue *sharedOperationQueue;

@property (retain, nonatomic) MPModelPlaylist *collaborationToEnd;

- (void)performWithResponseHandler:(id /* block */)a0;
- (id)newOperationWithResponseHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
