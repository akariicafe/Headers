@class NSString;
@protocol MTLBinaryArchive;

@interface CLKUIMetalBinaryArchive : NSObject {
    NSString *_archiveName;
}

@property (retain, nonatomic) id<MTLBinaryArchive> mtlBinaryArchive;

+ (id)archiveWithName:(id)a0 bundle:(id)a1 device:(id)a2;

- (void).cxx_destruct;
- (id)newFunctionInLibrary:(id)a0 withDescriptor:(id)a1;
- (id)newRenderPipelineStateForDevice:(id)a0 withDescriptor:(id)a1;
- (BOOL)_binaryArchivesFeatureEnabled;
- (BOOL)_hasBinaryArchive;
- (BOOL)_shouldUseBinaryArchives;
- (id)initWithName:(id)a0 bundle:(id)a1 device:(id)a2;
- (id)loadMTLBinaryArchiveNamed:(id)a0 inBundle:(id)a1 forDevice:(id)a2;
- (void)logElapsedTimeWithStart:(double)a0 category:(unsigned long long)a1 name:(id)a2 usingBinaryArchive:(BOOL)a3;

@end
