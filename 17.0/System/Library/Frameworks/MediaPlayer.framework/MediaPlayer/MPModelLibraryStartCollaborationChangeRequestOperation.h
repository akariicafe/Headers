@class MPModelLibraryStartCollaborationChangeRequest;

@interface MPModelLibraryStartCollaborationChangeRequestOperation : MPAsyncOperation

@property (copy, nonatomic) id /* block */ responseHandler;
@property (copy, nonatomic) MPModelLibraryStartCollaborationChangeRequest *request;

- (void)execute;
- (void).cxx_destruct;

@end
