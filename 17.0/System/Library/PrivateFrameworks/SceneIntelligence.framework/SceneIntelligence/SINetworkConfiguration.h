@class NSString, NSMutableSet;

@interface SINetworkConfiguration : NSObject

@property (retain) NSString *networkPath;
@property long long engineType;
@property BOOL runByE5RT;
@property (retain) NSMutableSet *disabledOutputBlobs;
@property (retain) NSString *loggerPrefix;
@property BOOL supportZeroCopy;
@property (readonly) NSString *coreAnalyticEventName;
@property BOOL isReplay;
@property int coreAnalyticTimeInterval;
@property (readonly, nonatomic) NSString *algorithmClassName;
@property (readonly, nonatomic) NSString *algorithmOutputClassName;
@property (readonly) NSString *networkMode;
@property (readonly) NSString *networkName;
@property (readonly, nonatomic) BOOL consumeDepth;
@property (readonly) int signpostMappingID;

- (id)init;
- (void)setNetworkName:(id)a0;
- (id)initWithEventName:(id)a0;
- (void).cxx_destruct;
- (void)setNetworkMode:(id)a0;

@end
