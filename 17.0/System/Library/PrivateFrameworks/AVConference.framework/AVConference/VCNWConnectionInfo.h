@class NSString, VCNetworkAddress, NSObject;
@protocol OS_nw_connection, OS_nw_parameters;

@interface VCNWConnectionInfo : VCObject {
    NSObject<OS_nw_parameters> *_parameters;
    VCNetworkAddress *_remoteAddress;
}

@property (retain, nonatomic) NSObject<OS_nw_connection> *connection;
@property (retain, nonatomic) NSObject<OS_nw_parameters> *parameters;
@property (copy, nonatomic) NSString *connectionID;
@property (copy, nonatomic) VCNetworkAddress *remoteAddress;

- (void)dealloc;
- (BOOL)isSameRemoteAddress:(id)a0;
- (id)newParametersFromConnection;
- (id)newRemoteAddressFromConnection;

@end
