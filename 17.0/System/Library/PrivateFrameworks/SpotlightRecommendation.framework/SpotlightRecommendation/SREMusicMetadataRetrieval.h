@interface SREMusicMetadataRetrieval : NSObject

- (void)extractAlbumMetadataFromFact:(id)a0 withAllAnswers:(id)a1 toCandidate:(id)a2;
- (void)extractArtistMetadataFromFact:(id)a0 withAllAnswers:(id)a1 toCandidate:(id)a2;
- (void)extractGenreMetadataFromFact:(id)a0 withAllAnswers:(id)a1 toCandidate:(id)a2;
- (id)parseAnswer:(id)a0 withAllAnswers:(id)a1;
- (id)retrieveMusicMetadata:(id)a0 error:(id *)a1;

@end
