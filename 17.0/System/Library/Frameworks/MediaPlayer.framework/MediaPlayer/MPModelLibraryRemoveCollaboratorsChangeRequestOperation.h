@class MPModelLibraryRemoveCollaboratorsChangeRequest;

@interface MPModelLibraryRemoveCollaboratorsChangeRequestOperation : MPAsyncOperation

@property (copy, nonatomic) id /* block */ responseHandler;
@property (copy, nonatomic) MPModelLibraryRemoveCollaboratorsChangeRequest *request;

- (void)execute;
- (void).cxx_destruct;

@end
