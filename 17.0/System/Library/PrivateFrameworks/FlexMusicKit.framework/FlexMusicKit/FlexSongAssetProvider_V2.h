@class NSString;

@interface FlexSongAssetProvider_V2 : NSObject <FlexSongAssetProviderProtocol>

@property (retain, nonatomic) NSString *rootFolderPath;
@property (retain, nonatomic) NSString *audioFileExtension;

- (void).cxx_destruct;
- (id)_folderNameForSegmentType:(unsigned long long)a0;
- (BOOL)assetsAreLocal;
- (id)initWithFolderPath:(id)a0 audioFileExtension:(id)a1;
- (id)urlToAudioContainerForSegmentType:(unsigned long long)a0;
- (id)urlToAudioForSegment:(id)a0;
- (id)urlToRoot;

@end
