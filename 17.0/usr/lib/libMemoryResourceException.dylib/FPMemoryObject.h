@class NSString, NSDictionary, NSMutableDictionary, NSMutableArray, FPRangeList;

@interface FPMemoryObject : NSObject <FPMemoryObject> {
    BOOL _accurateSizes;
    NSMutableDictionary *_processMemoryRegions;
    FPRangeList *_rangeList;
}

@property (nonatomic) int ownerPid;
@property (readonly, nonatomic) unsigned long long dirtySize;
@property (readonly, nonatomic) unsigned long long cleanSize;
@property (readonly, nonatomic) unsigned long long reclaimableSize;
@property (readonly, nonatomic) unsigned long long swappedSize;
@property (readonly, nonatomic) unsigned long long wiredSize;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *detailedName;
@property (readonly, nonatomic) NSString *fullName;
@property (readonly, nonatomic) BOOL verbose;
@property (readonly, nonatomic) NSMutableArray *memoryRegions;
@property (readonly, nonatomic) BOOL containsFakeRegion;
@property (readonly, nonatomic) NSDictionary *auxData;
@property (readonly, nonatomic) NSDictionary *detailedAuxData;
@property (readonly, nonatomic) NSString *auxDataName;
@property (readonly, nonatomic) NSString *detailedAuxDataName;
@property (readonly, nonatomic) BOOL couldHaveProcessView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)viewForProcess:(id)a0;
- (BOOL)finalizeObject;
- (id)ensureMemoryObject;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
