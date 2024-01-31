@class CFXClip, NSString;

@interface CFXExportClipDataSource : NSObject <JFXCompositionPlayableElementsDataSource>

@property (retain, nonatomic) CFXClip *clip;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)imageScale;
- (BOOL)isExporting;
- (id)colorSpace;
- (long long)count;
- (struct CGSize { double x0; double x1; })renderSize;
- (int)timeScale;
- (void).cxx_destruct;
- (int)duration;
- (int)frameRate;
- (struct CGSize { double x0; double x1; })frameSize;
- (id)initWithClip:(id)a0;
- (id)playableElementAtIndex:(long long)a0;
- (BOOL)screenCanShow2160P;
- (BOOL)use2160Pcontent:(BOOL)a0;

@end
