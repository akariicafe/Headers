@class NSOperationQueue, MPModelPlaylist, NSArray;

@interface MPModelLibraryRemoveCollaboratorsChangeRequest : NSObject <NSCopying> {
    NSOperationQueue *_operationQueue;
}

@property (class, readonly, nonatomic) NSOperationQueue *sharedOperationQueue;

@property (retain, nonatomic) MPModelPlaylist *collaboration;
@property (retain, nonatomic) NSArray *socialProfileIDsToRemove;

- (void)performWithResponseHandler:(id /* block */)a0;
- (id)newOperationWithResponseHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
