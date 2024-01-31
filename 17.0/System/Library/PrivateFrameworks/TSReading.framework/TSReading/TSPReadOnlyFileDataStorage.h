@class NSURL;

@interface TSPReadOnlyFileDataStorage : TSPFileDataStorage {
    NSURL *_URL;
}

- (id)initWithURL:(id)a0;
- (BOOL)readOnly;
- (void).cxx_destruct;
- (void)performReadWithAccessor:(id /* block */)a0;
- (BOOL)writeToBundleWriter:(id)a0 preferredFilename:(id)a1 filename:(id *)a2 didCopyDataToBundle:(BOOL *)a3;

@end
