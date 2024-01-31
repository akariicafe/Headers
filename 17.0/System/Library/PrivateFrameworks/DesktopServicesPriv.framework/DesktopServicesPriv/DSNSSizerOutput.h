@class NSString;

@interface DSNSSizerOutput : NSObject

@property (nonatomic) long long userVisibleItemCount;
@property (nonatomic) long long fsItemCount;
@property (nonatomic) long long logicalBytesTotal;
@property (nonatomic) long long physicalBytesTotal;
@property (nonatomic) long long mergeSourceNewerConflictsCount;
@property (nonatomic) long long mergeSourceItemsNotInDestinationCount;
@property (nonatomic) long long mergeDestinationNewerConflictsCount;
@property (nonatomic) long long mergeDestinationNewerConflictsBytes;
@property (nonatomic) long long mergeMatchedFilesCount;
@property (nonatomic) long long mergeMatchedFilesBytes;
@property (nonatomic) long long mergeDiffMetaDataFilesCount;
@property (nonatomic) long long mergeDestinationItemsNotInSourceCount;
@property (nonatomic) long long mergePhysicalDelta;
@property (retain, nonatomic) NSString *sourcePath;
@property (retain, nonatomic) NSString *destinationPath;
@property (nonatomic) long long conflictPhysicalDelta;
@property (nonatomic) unsigned long long maxFileSize;
@property (nonatomic) unsigned int conflicts;

- (void).cxx_destruct;
- (id)initWithSizerOutput:(struct TSizerOutput { long long x0; long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7; long long x8; long long x9; long long x10; long long x11; long long x12; long long x13; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *x0; } x0; } x14; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *x0; } x0; } x15; long long x16; unsigned long long x17; unsigned int x18; BOOL x19; BOOL x20; BOOL x21; BOOL x22; BOOL x23; })a0;
- (id)initWithSpaceNeeds:(struct DestinationSpaceNeeds { long long x0; long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7; long long x8; long long x9; long long x10; long long x11; long long x12; char x13[1024]; char x14[1024]; long long x15; unsigned long long x16; BOOL x17; unsigned int x18; int x19; })a0;

@end
