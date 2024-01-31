@class MPModelLibraryAddToPlaylistChangeRequest;

@interface MusicKit_SoftLinking_MPModelLibraryAddToPlaylistChangeRequest : NSObject {
    MPModelLibraryAddToPlaylistChangeRequest *_underlyingAddToPlaylistChangeRequest;
}

@property (readonly, nonatomic) MPModelLibraryAddToPlaylistChangeRequest *_underlyingLibraryAddToPlaylistChangeRequest;
@property (copy, nonatomic) id /* block */ storeImportAllowedHandler;

- (void).cxx_destruct;
- (id)initWithPlaylist:(id)a0 songIdentifiers:(id)a1 representativeObject:(id)a2 referralObject:(id)a3;

@end
