@interface MPCAssistantCommand : NSObject

- (void)sendCommand:(unsigned int)a0 toDestination:(id)a1 withOptions:(id)a2 completion:(id /* block */)a3;
- (void)sendPlaybackQueue:(id)a0 toDestination:(id)a1 withOptions:(id)a2 completion:(id /* block */)a3;
- (void)sendPlaybackArchive:(id)a0 toDestination:(id)a1 withOptions:(id)a2 completion:(id /* block */)a3;
- (void)sendCommandWithResult:(unsigned int)a0 toDestination:(id)a1 withOptions:(id)a2 completion:(id /* block */)a3;
- (void)sendPlaybackArchive:(id)a0 toDestination:(id)a1 completion:(id /* block */)a2;
- (void)sendPlaybackArchiveWithResult:(id)a0 toDestination:(id)a1 completion:(id /* block */)a2;
- (void)sendPlaybackArchiveWithResult:(id)a0 toDestination:(id)a1 withOptions:(id)a2 completion:(id /* block */)a3;
- (void)sendPlaybackQueue:(id)a0 toDestination:(id)a1 completion:(id /* block */)a2;
- (void)sendPlaybackQueueWithResult:(id)a0 toDestination:(id)a1 completion:(id /* block */)a2;
- (void)sendPlaybackQueueWithResult:(id)a0 toDestination:(id)a1 withOptions:(id)a2 completion:(id /* block */)a3;

@end
