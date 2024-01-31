@class NSMutableArray, NSString, NSMutableDictionary, AVAudioSession, NSObject, CUAudioRequest;
@protocol OS_dispatch_queue;

@interface CUAudioPlayer : NSObject <AVAudioPlayerDelegate> {
    AVAudioSession *_audioSession;
    CUAudioRequest *_currentRequest;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    unsigned int _invalidateFlags;
    NSMutableArray *_playRequests;
    NSMutableDictionary *_preparedRequests;
    CUAudioPlayer *_selfRef;
    struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *_ucat;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) unsigned int flags;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)_activate;
- (void)dealloc;
- (void)_invalidated;
- (void)activate;
- (void).cxx_destruct;
- (void)_processRequests;
- (void)_abortRequestsWithError:(id)a0;
- (void)_completeRequest:(id)a0 error:(id)a1;
- (void)_invalidateWithFlags:(unsigned int)a0;
- (void)_playPreparedIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)_playURL:(id)a0 loop:(BOOL)a1 completion:(id /* block */)a2;
- (void)_prepareURL:(id)a0 identifier:(id)a1 completion:(id /* block */)a2;
- (void)audioPlayerDecodeErrorDidOccur:(id)a0 error:(id)a1;
- (void)audioPlayerDidFinishPlaying:(id)a0 successfully:(BOOL)a1;
- (void)audioSessionInterrupted:(id)a0;
- (void)invalidateWithFlags:(unsigned int)a0;
- (void)playPreparedIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)playURL:(id)a0 completion:(id /* block */)a1;
- (void)playURL:(id)a0 loop:(BOOL)a1 completion:(id /* block */)a2;
- (void)prepareURL:(id)a0 identifier:(id *)a1 completion:(id /* block */)a2;

@end
