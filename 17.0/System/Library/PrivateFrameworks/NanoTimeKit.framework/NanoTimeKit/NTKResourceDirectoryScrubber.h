@class NSDictionary;

@interface NTKResourceDirectoryScrubber : NSObject {
    NSDictionary *_operationsMaps;
}

- (id)initWithOperations:(id)a0;
- (void).cxx_destruct;
- (BOOL)_scrubAssetAtURL:(id)a0 toDestinationURL:(id)a1 error:(id *)a2;
- (BOOL)scrubDirectoryAtPath:(id)a0 toDestinationPath:(id)a1 error:(id *)a2;

@end
