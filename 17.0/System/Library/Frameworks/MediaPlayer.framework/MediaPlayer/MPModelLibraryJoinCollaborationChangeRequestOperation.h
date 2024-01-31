@class MPModelLibraryJoinCollaborationChangeRequest;

@interface MPModelLibraryJoinCollaborationChangeRequestOperation : MPAsyncOperation

@property (copy, nonatomic) id /* block */ responseHandler;
@property (copy, nonatomic) MPModelLibraryJoinCollaborationChangeRequest *request;

- (void)execute;
- (void).cxx_destruct;

@end
