@class NSString;

@interface MPAVAuxiliaryDevice : NSObject

@property (readonly, nonatomic) NSString *uniqueID;
@property (readonly, nonatomic) NSString *productName;
@property (readonly, nonatomic) NSString *deviceName;
@property (readonly, nonatomic) NSString *modelIdentifier;
@property (readonly, nonatomic, getter=isPlaying) BOOL playing;

+ (id)otherConnectedDevicesFromRouteDescription:(id)a0;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
