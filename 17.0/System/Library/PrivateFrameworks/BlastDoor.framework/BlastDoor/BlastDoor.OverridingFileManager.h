@class NSURL;

@interface BlastDoor.OverridingFileManager : NSFileManager {
    void /* unknown type, empty encoding */ overrides;
}

@property (nonatomic, readonly) NSURL *temporaryDirectory;

- (id)init;
- (void).cxx_destruct;
- (id)URLForDirectory:(unsigned long long)a0 inDomain:(unsigned long long)a1 appropriateForURL:(id)a2 create:(BOOL)a3 error:(id *)a4;

@end
