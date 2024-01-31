@class MCSSyncResumer;

@interface IMSyncResumer : NSObject

@property (retain, nonatomic) MCSSyncResumer *resumer;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)attemptToResumeSyncIfAppropriate;
- (id)systemMonitorListener;

@end
