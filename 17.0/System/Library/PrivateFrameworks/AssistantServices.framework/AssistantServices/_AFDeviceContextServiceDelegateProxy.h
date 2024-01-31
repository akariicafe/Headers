@class NSString, AFDeviceContextConnection;

@interface _AFDeviceContextServiceDelegateProxy : NSObject <AFDeviceContextServiceDelegate> {
    AFDeviceContextConnection *_connection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithConnection:(id)a0;
- (void).cxx_destruct;
- (oneway void)updateLocalDeviceContext:(id)a0;

@end
