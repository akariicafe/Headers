@class MPMediaLibraryAlbumAppData, MPModelObject;

@interface MPModelLibraryAlbumAppDataChangeRequest : NSObject <NSCopying>

@property (retain, nonatomic) MPModelObject *modelObject;
@property (retain, nonatomic) MPMediaLibraryAlbumAppData *albumAppData;

- (id)newOperationWithResponseHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
