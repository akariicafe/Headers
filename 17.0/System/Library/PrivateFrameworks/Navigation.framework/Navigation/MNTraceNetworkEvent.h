@class NSString;

@interface MNTraceNetworkEvent : NSObject <MNTracePlayerTimelineStreamObjectType>

@property (readonly, nonatomic) double position;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double timestamp;
@property (nonatomic) BOOL cellEnabled;
@property (nonatomic) BOOL wifiEnabled;
@property (nonatomic) BOOL nlcEnabled;
@property (copy, nonatomic) NSString *nlcProfile;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
