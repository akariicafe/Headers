@class NSObject;
@protocol OS_nw_connection;

@interface IDSDataChannelsDirectConnections : NSObject

@property (retain) NSObject<OS_nw_connection> *udpConnection;
@property (retain) NSObject<OS_nw_connection> *qpodConnection;

- (void).cxx_destruct;

@end
