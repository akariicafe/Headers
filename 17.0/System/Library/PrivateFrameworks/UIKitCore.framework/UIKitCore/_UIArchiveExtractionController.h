@class NSString, NSArray;

@interface _UIArchiveExtractionController : NSObject {
    NSArray *_extractedContentAbsolutePaths;
}

@property (readonly, nonatomic) NSString *sourceArchivePath;
@property (retain, nonatomic) NSString *destinationExtractionRootPath;
@property (retain, nonatomic) NSString *destinationContentProtectionType;
@property (retain, nonatomic) NSString *sourceArchiveExtractionRootPath;

- (void).cxx_destruct;
- (BOOL)_createDestinationRoot:(id *)a0;
- (BOOL)extractArchiveContent:(id *)a0;
- (id)extractedContentAbsolutePathsMatchingPredicate:(id /* block */)a0;
- (id)initWithSourceArchivePath:(id)a0 destinationExtractionRootPath:(id)a1;

@end
