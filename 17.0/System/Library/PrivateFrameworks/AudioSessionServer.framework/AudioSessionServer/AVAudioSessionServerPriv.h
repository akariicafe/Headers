@class NSString, AVAudioSessionXPCServer;
@protocol AVAudioSessionServerDelegate;

@interface AVAudioSessionServerPriv : NSObject <AVAudioSessionServer> {
    AVAudioSessionXPCServer *_xpcServer;
    id<AVAudioSessionServerDelegate> _serverDelegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct tuple<int, std::string, int> { struct __tuple_impl<std::__tuple_indices<0, 1, 2>, int, std::string, int> { int x0; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x0; struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x1; int x2; } x0; })getDescriptionForSession:(unsigned int)a0;
- (int)destroySession:(unsigned int)a0 procID:(const void *)a1;
- (int)setClientMuteState:(BOOL)a0 sessionID:(unsigned int)a1 playerType:(unsigned int)a2 playerRef:(void *)a3;
- (int)destroySession:(unsigned int)a0 auditToken:(const struct { unsigned int x0[8]; } *)a1;
- (id)init;
- (struct tuple<int, AudioSessionDuckingInfo> { struct __tuple_impl<std::__tuple_indices<0, 1>, int, AudioSessionDuckingInfo> { int x0; struct AudioSessionDuckingInfo { BOOL x0; float x1; float x2; } x1; } x0; })setPlayState:(unsigned int)a0 sessionID:(unsigned int)a1 playerType:(unsigned int)a2 playerRef:(void *)a3 modes:(unsigned int)a4 subsessionRef:(void *)a5;
- (void)mapSession:(unsigned int)a0 isInput:(BOOL)a1 toDevice:(id)a2;
- (void)sampleRateChanged:(double)a0 forDevice:(unsigned int)a1;
- (unsigned long long)dynamicLatencyForDevice:(unsigned int)a0;
- (void)destroyTimestampWriterForDevice:(id)a0;
- (struct tuple<int, bool> { struct __tuple_impl<std::__tuple_indices<0, 1>, int, bool> { int x0; BOOL x1; } x0; })checkBooleanEntitlementForSession:(unsigned int)a0 entitlementIdentifier:(const char *)a1;
- (struct vector<unsigned int, std::allocator<unsigned int>> { unsigned int *x0; unsigned int *x1; struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> { unsigned int *x0; } x2; })getSessionIDsForToken:(const struct { unsigned int x0[8]; } *)a0;
- (id /* block */)createTimestampWriterForDevice:(id)a0 halID:(unsigned int)a1 isDecoupledInput:(BOOL)a2;
- (int)requestApplyInputMuteForSession:(unsigned int)a0 inputMuted:(BOOL)a1;
- (struct tuple<opaqueCMSession *, const void *, unsigned int> { struct __tuple_impl<std::__tuple_indices<0, 1, 2>, opaqueCMSession *, const void *, unsigned int> { struct opaqueCMSession *x0; void *x1; unsigned int x2; } x0; })createCoreMXSessionForPID:(int)a0;
- (struct tuple<int, bool> { struct __tuple_impl<std::__tuple_indices<0, 1>, int, bool> { int x0; BOOL x1; } x0; })isSessionMuted:(unsigned int)a0;
- (struct opaqueCMSession { } *)copyCMSession:(unsigned int)a0;
- (void)startXPCServer;
- (struct tuple<opaqueCMSession *, const void *, unsigned int> { struct __tuple_impl<std::__tuple_indices<0, 1, 2>, opaqueCMSession *, const void *, unsigned int> { struct opaqueCMSession *x0; void *x1; unsigned int x2; } x0; })createCoreMXSessionForProcID:(const void *)a0 type:(unsigned int)a1;
- (struct tuple<opaqueCMSession *, const void *, unsigned int> { struct __tuple_impl<std::__tuple_indices<0, 1, 2>, opaqueCMSession *, const void *, unsigned int> { struct opaqueCMSession *x0; void *x1; unsigned int x2; } x0; })getPrimarySessionForProcID:(const void *)a0 createIfNecessary:(BOOL)a1;
- (int)deactivateWithFlags:(unsigned int)a0 auditToken:(const struct { unsigned int x0[8]; } *)a1 flags:(unsigned int)a2;
- (void).cxx_destruct;
- (int)queuePIDOverridden:(int)a0;
- (id)initWithAudioControlQueue:(id)a0 delegate:(id)a1;
- (unsigned long long)dynamicLatencyForDevice:(unsigned int)a0 isInput:(BOOL)a1;
- (int)activateWithFlags:(unsigned int)a0 auditToken:(const struct { unsigned int x0[8]; } *)a1 flags:(unsigned int)a2;
- (struct tuple<opaqueCMSession *, const void *, unsigned int> { struct __tuple_impl<std::__tuple_indices<0, 1, 2>, opaqueCMSession *, const void *, unsigned int> { struct opaqueCMSession *x0; void *x1; unsigned int x2; } x0; })createCoreMXSession:(const struct { unsigned int x0[8]; } *)a0 type:(unsigned int)a1;
- (void)generateIOControllerEvent:(unsigned long long)a0 forDevice:(unsigned int)a1;
- (int)destroyCMSessionForPID:(int)a0 sessionID:(unsigned int)a1;
- (BOOL)interruptDummyPlayersForSession:(unsigned int)a0;
- (struct tuple<opaqueCMSession *, const void *, unsigned int> { struct __tuple_impl<std::__tuple_indices<0, 1, 2>, opaqueCMSession *, const void *, unsigned int> { struct opaqueCMSession *x0; void *x1; unsigned int x2; } x0; })getPrimarySessionForPID:(int)a0 createIfNecessary:(BOOL)a1;
- (struct tuple<opaqueCMSession *, const void *, unsigned int> { struct __tuple_impl<std::__tuple_indices<0, 1, 2>, opaqueCMSession *, const void *, unsigned int> { struct opaqueCMSession *x0; void *x1; unsigned int x2; } x0; })getPrimarySession:(const struct { unsigned int x0[8]; } *)a0 createIfNecessary:(BOOL)a1;
- (struct tuple<int, std::string, int> { struct __tuple_impl<std::__tuple_indices<0, 1, 2>, int, std::string, int> { int x0; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x0; struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x1; int x2; } x0; })getJSONDescriptionForSession:(unsigned int)a0;
- (void *)getDefaultMXSession:(unsigned int)a0;

@end
