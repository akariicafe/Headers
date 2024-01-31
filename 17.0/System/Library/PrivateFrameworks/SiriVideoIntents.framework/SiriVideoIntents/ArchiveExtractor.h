@interface ArchiveExtractor : NSObject

- (BOOL)copyDataFromReadArchive:(struct archive { } *)a0 toWriteDiskArchive:(struct archive { } *)a1;
- (struct archive { } *)createReadArchive;
- (struct archive { } *)createWriteDiskArchive;
- (BOOL)extractArchiveAtURL:(id)a0 toDestinationDirectoryURL:(id)a1;
- (BOOL)performExtractionForArchive:(struct archive { } *)a0 toDestinationDirectory:(id)a1;
- (BOOL)unarchiveData:(id)a0 toDestinationDirectory:(id)a1;

@end
