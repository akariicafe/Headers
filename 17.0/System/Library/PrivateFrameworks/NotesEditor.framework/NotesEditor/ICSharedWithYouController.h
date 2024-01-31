@class ICSharedWithYouControllerInternal, NSManagedObjectContext;

@interface ICSharedWithYouController : NSObject

@property (class, readonly, nonatomic) ICSharedWithYouController *sharedController;

@property (readonly, nonatomic) ICSharedWithYouControllerInternal *controller;
@property (retain, nonatomic) NSManagedObjectContext *managedObjectContext;

- (id)initWithController:(id)a0;
- (void).cxx_destruct;
- (void)fetchShareMetadataWithURLs:(id)a0 completion:(id /* block */)a1;
- (id)highlightForURL:(id)a0;
- (void)userAcceptedInvitationWithShareMetadata:(id)a0 associatedObjectID:(id)a1;

@end
