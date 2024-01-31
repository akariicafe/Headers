@class NSString, NSArray;

@interface _UILibArchiveStreamingExtractor : NSObject

@property (readonly, nonatomic) NSString *archivePath;
@property (readonly, nonatomic) NSArray *extractedContentAbsolutePaths;

+ (id)archiveSubpathByStandardizingArchiveSubpath:(id)a0;
+ (BOOL)shouldExtractPathInArchive:(id)a0 forExtractionRootedAtStandardizedSubpathInArchive:(id)a1;

- (void).cxx_destruct;
- (BOOL)extractArchivePath:(id)a0 toDirectory:(id)a1 error:(id *)a2;
- (id)initForExtractingArchivePath:(id)a0;

@end
