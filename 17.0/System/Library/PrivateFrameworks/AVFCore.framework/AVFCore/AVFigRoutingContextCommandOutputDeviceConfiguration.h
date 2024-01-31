@class NSString, NSData, NSArray;

@interface AVFigRoutingContextCommandOutputDeviceConfiguration : NSObject <AVOutputDeviceConfigurationRetrieval> {
    struct __CFDictionary { } *_response;
}

@property (readonly, nonatomic) NSString *deviceName;
@property (readonly, nonatomic) NSString *devicePassword;
@property (readonly, nonatomic) NSString *deviceID;
@property (readonly, nonatomic) NSData *devicePublicKey;
@property (readonly, nonatomic) BOOL automaticallyAllowsConnectionsFromPeersInHomeGroup;
@property (readonly, nonatomic) BOOL onlyAllowsConnectionsFromPeersInHomeGroup;
@property (readonly, nonatomic) NSArray *peersInHomeGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (id)initWithRoutingContextComandResponse:(struct __CFDictionary { } *)a0;

@end
