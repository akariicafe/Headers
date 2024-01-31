@interface SREMusicFeatureExtraction : NSObject

- (id)init;
- (BOOL)_handleSongEvent:(id)a0 context:(id)a1 numMusic:(unsigned long long)a2 outputSequence:(id)a3;
- (id)retrieveNowPlayingHistoryWithLength:(unsigned long long)a0 error:(id *)a1;

@end
