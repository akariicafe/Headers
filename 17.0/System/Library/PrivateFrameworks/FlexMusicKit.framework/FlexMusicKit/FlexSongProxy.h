@interface FlexSongProxy : FlexSongBackend

- (BOOL)canPlay;
- (id)initWithUID:(id)a0 songName:(id)a1 artistName:(id)a2 tagIDs:(id)a3 keywords:(id)a4 weightedKeywords:(id)a5 hidden:(BOOL)a6 recalled:(BOOL)a7 assets:(id)a8 audioEncoderPresetName:(id)a9 metadataVersion:(long long)a10 songFormat:(id)a11;

@end
