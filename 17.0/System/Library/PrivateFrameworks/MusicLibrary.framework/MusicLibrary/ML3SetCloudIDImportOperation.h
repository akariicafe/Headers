@class NSArray;

@interface ML3SetCloudIDImportOperation : ML3ImportOperation {
    NSArray *_trackInfo;
    NSArray *_playlistInfo;
}

- (void)main;
- (void).cxx_destruct;
- (unsigned long long)importSource;
- (BOOL)_importPlaylistsUsingImportSession:(void *)a0;
- (BOOL)_importTracksUsingImportSession:(void *)a0;
- (BOOL)_performImportWithTransaction:(id)a0;

@end
