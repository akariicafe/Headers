@interface AVCompositionFormatReaderInspector : AVFormatReaderInspector

- (BOOL)isExportable;
- (BOOL)isPlayable;
- (BOOL)isReadable;
- (BOOL)isCompatibleWithSavedPhotosAlbum;
- (BOOL)isComposable;
- (BOOL)isCompatibleWithAirPlayVideo;
- (BOOL)isCompatibleWithPhotosTranscodingServiceWithOptions:(id)a0;

@end
