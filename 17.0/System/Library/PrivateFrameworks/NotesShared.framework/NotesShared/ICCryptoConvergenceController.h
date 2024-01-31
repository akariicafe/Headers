@class NSProgress, NSManagedObjectContext;

@interface ICCryptoConvergenceController : NSObject

@property (class, retain, nonatomic) ICCryptoConvergenceController *sharedController;

@property (retain) NSProgress *progress;
@property (readonly, nonatomic) NSManagedObjectContext *workerContext;

- (void).cxx_destruct;
- (void)authenticationStateDidDeauthenticate:(id)a0;
- (void)cancelAndWaitWithReason:(id)a0;
- (BOOL)convergeNotesInAccountWithID:(id)a0 configuration:(id)a1 progress:(id)a2;
- (id)initWithWorkerContext:(id)a0;
- (BOOL)convergeNoteWithID:(id)a0 notePassphrase:(id)a1;
- (BOOL)unsafelyConvergeAttachmentsForNote:(id)a0 notePassphrase:(id)a1 noteMainKey:(id)a2;
- (BOOL)unsafelyConvergeNote:(id)a0 configuration:(id)a1;
- (BOOL)unsafelyConvergeNotesInAccount:(id)a0 configuration:(id)a1;

@end
