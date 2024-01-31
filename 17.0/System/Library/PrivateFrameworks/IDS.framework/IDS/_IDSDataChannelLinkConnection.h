@class NSString, NSUUID;

@interface _IDSDataChannelLinkConnection : NSObject

@property (retain) NSString *type;
@property (retain) NSUUID *childConnectionID;
@property (retain) NSString *protocolStack;
@property unsigned long long nwConnectionID;
@property unsigned long long clientNWConnectionID;
@property (retain) NSString *nwConnectionToken;
@property BOOL allowOutgoing;
@property BOOL isQUICPod;

- (id)description;
- (void).cxx_destruct;

@end
