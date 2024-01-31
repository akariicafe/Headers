@interface IMMessagesBlastDoorInterfaceInternal : NSObject {
    void /* unknown type, empty encoding */ bd;
    void /* unknown type, empty encoding */ type;
}

+ (BOOL)supportsFeature:(id)a0;

- (id)init;
- (void)generateWorkoutPreviewForAttachmentWithFileURL:(id)a0 maxPixelDimension:(float)a1 scale:(float)a2 resultHandler:(id /* block */)a3;
- (void)defuseData:(id)a0 forPreviewType:(unsigned char)a1 resultHandler:(id /* block */)a2;
- (id)generateImagePreviewForFileURL:(id)a0 maxPixelDimension:(float)a1 scale:(float)a2 error:(id *)a3;
- (void)generatePreviewforAudioMessageWithfileURL:(id)a0 resultHandler:(id /* block */)a1;
- (void)defuseCollaborationClearNoticePayload:(id)a0 resultHandler:(id /* block */)a1;
- (void)defuseTopLevelDictionary:(id)a0 resultHandler:(id /* block */)a1;
- (void)generatePreviewforAnimatedImageWithfileURL:(id)a0 maxPixelDimension:(float)a1 index:(long long)a2 maxCount:(long long)a3 resultHandler:(id /* block */)a4;
- (void)defuseBalloonPluginPayload:(id)a0 withIdentifier:(id)a1 resultHandler:(id /* block */)a2;
- (id)generatePreviewforAttachmentWithfileURL:(id)a0 error:(id *)a1;
- (void)defuseNicknameDictionary:(id)a0 withKey:(id)a1 recordTag:(id)a2 resultHandler:(id /* block */)a3;
- (void)defuseNicknameDictionary:(id)a0 withKey:(id)a1 recordTag:(id)a2 wallpaperDataTag:(id)a3 wallpaperLowResDataTag:(id)a4 wallpaperMetadataTag:(id)a5 resultHandler:(id /* block */)a6;
- (id)defuseBalloonPluginPayload:(id)a0 withIdentifier:(id)a1 error:(id *)a2;
- (void)defuseSMSDictionary:(id)a0 resultHandler:(id /* block */)a1;
- (void)defuseCollaborationNoticePayload:(id)a0 resultHandler:(id /* block */)a1;
- (void)decontaminateTopLevelDictionary:(id)a0 resultHandler:(id /* block */)a1;
- (id)defuseTopLevelDictionary:(id)a0 error:(id *)a1;
- (void)getMetadataforAnimatedImageWithfileURL:(id)a0 maxCount:(long long)a1 resultHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (void)generatePreviewforAttachmentWithfileURL:(id)a0 resultHandler:(id /* block */)a1;
- (void)generateMetadataforAttachmentWithfileURL:(id)a0 resultHandler:(id /* block */)a1;
- (void)defuseCollaborationNoticeActionDictionary:(id)a0 resultHandler:(id /* block */)a1;
- (id)initWithBlastDoorInstanceType:(id)a0;
- (void)generateMoviePreviewForAttachmentWithFileURL:(id)a0 maxPixelDimension:(float)a1 minThumbnailPxSize:(struct CGSize { double x0; double x1; })a2 scale:(float)a3 resultHandler:(id /* block */)a4;
- (void)generatePreviewforAttachmentWithfileURL:(id)a0 maxPixelDimension:(float)a1 scale:(float)a2 resultHandler:(id /* block */)a3;
- (void)generateMoviePreviewForAttachmentWithFileURL:(id)a0 maxPixelDimension:(float)a1 minThumbnailPxSize:(struct CGSize { double x0; double x1; })a2 scale:(float)a3 frameInterval:(long long)a4 resultHandler:(id /* block */)a5;
- (id)defuseSMSDictionary:(id)a0 error:(id *)a1;
- (void)generateMovieFramesForAttachmentWithFileURL:(id)a0 targetPixelWidth:(long long)a1 targetPixelHeight:(long long)a2 frameLimit:(long long)a3 uniformSampling:(BOOL)a4 framesPerSync:(long long)a5 appliesPreferredTrackTransform:(BOOL)a6 resultHandler:(id /* block */)a7;

@end
