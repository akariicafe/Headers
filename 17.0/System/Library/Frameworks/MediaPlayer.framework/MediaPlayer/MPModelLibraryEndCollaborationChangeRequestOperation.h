@class MPModelLibraryEndCollaborationChangeRequest;

@interface MPModelLibraryEndCollaborationChangeRequestOperation : MPAsyncOperation

@property (copy, nonatomic) id /* block */ responseHandler;
@property (copy, nonatomic) MPModelLibraryEndCollaborationChangeRequest *request;

- (void)execute;
- (void).cxx_destruct;

@end
