@class _ANEIOSurfaceObject, NSArray, _ANEPerformanceStats, NSNumber, _ANESharedEvents;

@interface _ANERequest : NSObject

@property (retain, nonatomic) _ANEPerformanceStats *perfStats;
@property (copy, nonatomic) NSNumber *transactionHandle;
@property (readonly, nonatomic) NSArray *inputArray;
@property (readonly, nonatomic) NSArray *inputIndexArray;
@property (readonly, nonatomic) NSArray *outputArray;
@property (readonly, nonatomic) NSArray *outputIndexArray;
@property (readonly, nonatomic) _ANEIOSurfaceObject *weightsBuffer;
@property (retain, nonatomic) _ANESharedEvents *sharedEvents;
@property (readonly, copy, nonatomic) NSNumber *procedureIndex;
@property (readonly, nonatomic) NSArray *perfStatsArray;
@property (copy) id /* block */ completionHandler;

+ (id)requestWithInputs:(id)a0 inputIndices:(id)a1 outputs:(id)a2 outputIndices:(id)a3 weightsBuffer:(id)a4 perfStats:(id)a5 procedureIndex:(id)a6 sharedEvents:(id)a7;
+ (id)requestWithInputs:(id)a0 inputIndices:(id)a1 outputs:(id)a2 outputIndices:(id)a3 perfStats:(id)a4 procedureIndex:(id)a5;
+ (id)requestWithInputs:(id)a0 inputIndices:(id)a1 outputs:(id)a2 outputIndices:(id)a3 procedureIndex:(id)a4;
+ (id)requestWithInputs:(id)a0 inputIndices:(id)a1 outputs:(id)a2 outputIndices:(id)a3 weightsBuffer:(id)a4 perfStats:(id)a5 procedureIndex:(id)a6;
+ (id)requestWithInputs:(id)a0 inputIndices:(id)a1 outputs:(id)a2 outputIndices:(id)a3 weightsBuffer:(id)a4 perfStats:(id)a5 procedureIndex:(id)a6 sharedEvents:(id)a7 transactionHandle:(id)a8;
+ (id)requestWithInputs:(id)a0 inputIndices:(id)a1 outputs:(id)a2 outputIndices:(id)a3 weightsBuffer:(id)a4 procedureIndex:(id)a5;

- (BOOL)validate;
- (id)description;
- (void).cxx_destruct;
- (unsigned long long)ioSurfacesCount;
- (id)initWithInputs:(id)a0 inputIndices:(id)a1 outputs:(id)a2 outputIndices:(id)a3 weightsBuffer:(id)a4 perfStats:(id)a5 procedureIndex:(id)a6 sharedEvents:(id)a7 transactionHandle:(id)a8;
- (id)initWithVirtualModel:(void *)a0;

@end
