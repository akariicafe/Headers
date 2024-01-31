@class NSString, NSDictionary;
@protocol FPMemoryObject;

@interface FPMemoryCategory : NSObject {
    BOOL _isSummary;
    NSString *_name;
    id<FPMemoryObject> _firstMemoryObject;
}

@property (nonatomic) unsigned long long totalDirtySize;
@property (nonatomic) unsigned long long totalSwappedSize;
@property (nonatomic) unsigned long long totalCleanSize;
@property (nonatomic) unsigned long long totalReclaimableSize;
@property (nonatomic) unsigned long long totalWiredSize;
@property (nonatomic) unsigned int totalRegions;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *detailedName;
@property (readonly, nonatomic) NSString *fullName;
@property (readonly, nonatomic) BOOL verbose;
@property (readonly, nonatomic) NSDictionary *auxData;
@property (readonly, nonatomic) NSString *auxDataFullName;

- (id)init;
- (void).cxx_destruct;
- (void)addMemoryObject:(id)a0;
- (id)initSummary:(BOOL)a0;

@end
