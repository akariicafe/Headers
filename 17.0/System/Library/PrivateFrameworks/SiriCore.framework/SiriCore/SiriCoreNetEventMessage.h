@class NSUUID, NETSchemaNETClientEvent;

@interface SiriCoreNetEventMessage : NSObject

@property (retain, nonatomic) NSUUID *netId;
@property (retain, nonatomic) NETSchemaNETClientEvent *clientEvent;
@property (nonatomic) unsigned long long timestamp;

- (void).cxx_destruct;

@end
