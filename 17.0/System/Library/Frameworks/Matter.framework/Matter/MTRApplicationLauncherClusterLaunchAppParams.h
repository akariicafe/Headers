@class MTRApplicationLauncherClusterApplicationStruct, NSData, NSNumber;

@interface MTRApplicationLauncherClusterLaunchAppParams : NSObject <NSCopying>

@property (copy, nonatomic) MTRApplicationLauncherClusterApplicationStruct *application;
@property (copy, nonatomic) NSData *data;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
