@class MPModelLibraryPlaylistEditChangeRequest;

@interface MPModelLibraryPlaylistEditChangeRequestOperation : MPAsyncOperation

@property (copy, nonatomic) MPModelLibraryPlaylistEditChangeRequest *request;
@property (copy, nonatomic) id /* block */ localPersistenceResponseHandler;
@property (copy, nonatomic) id /* block */ completeResponseHandler;

+ (id)requiredPlaylistEntryProperties;

- (void)execute;
- (void).cxx_destruct;
- (id)_collaborationTrackEdits;
- (BOOL)_isCloudLibraryEnabled;

@end
