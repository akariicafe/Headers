@class NSUUID, PHASEExternalInputStreamDefinition;

@interface ManagedInputStream : NSObject

@property (nonatomic, getter=isStreamPaused) BOOL streamPaused;
@property (retain, nonatomic) PHASEExternalInputStreamDefinition *definition;
@property (retain, nonatomic) NSUUID *attributedClientID;
@property (nonatomic) BOOL canRecord;
@property (nonatomic) BOOL isMuted;
@property (nonatomic) struct shared_ptr<caulk::synchronized<Phase::Controller::ExternalStreamFader>> { void *__ptr_; struct __shared_weak_count *__cntrl_; } fader;
@property (nonatomic) BOOL isFading;
@property (nonatomic) BOOL shouldResumeWithSession;
@property (copy, nonatomic) id /* block */ pauseStateDidUpdateCallback;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithPaused:(BOOL)a0 attributedTo:(id)a1 definition:(id)a2 canRecord:(BOOL)a3 fader:(struct shared_ptr<caulk::synchronized<Phase::Controller::ExternalStreamFader>> { void *x0; struct __shared_weak_count *x1; })a4 pauseStateDidUpdateCallback:(id /* block */)a5;

@end
