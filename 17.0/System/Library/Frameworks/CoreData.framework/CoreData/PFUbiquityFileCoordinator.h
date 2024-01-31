@class NSString;

@interface PFUbiquityFileCoordinator : NSFileCoordinator {
    NSString *_localPeerID;
}

- (void)dealloc;
- (id)initWithFilePresenter:(id)a0;
- (BOOL)shouldRetryForError:(id)a0 ignoreFile:(BOOL *)a1;

@end
