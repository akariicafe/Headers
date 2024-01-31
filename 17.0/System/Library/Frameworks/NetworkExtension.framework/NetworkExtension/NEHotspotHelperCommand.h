@class NSArray, NEHotspotNetwork;

@interface NEHotspotHelperCommand : NSObject {
    struct __CNPluginCommand { } *_command;
}

@property (readonly) long long commandType;
@property (readonly) NEHotspotNetwork *network;
@property (readonly) NSArray *networkList;

- (void)dealloc;
- (id)description;
- (id)createResponse:(long long)a0;
- (id)createTCPConnection:(id)a0;
- (id)createUDPSession:(id)a0;

@end
