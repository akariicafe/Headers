@class MTRUnitTestingClusterSimpleStruct, NSNumber;

@interface MTRUnitTestingClusterSimpleStructEchoRequestParams : NSObject <NSCopying>

@property (copy, nonatomic) MTRUnitTestingClusterSimpleStruct *arg1;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
