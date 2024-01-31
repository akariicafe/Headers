@class NSMutableDictionary, RPCompanionLinkDevice;

@interface RPStatusDevice : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) RPCompanionLinkDevice *device;
@property (retain, nonatomic) NSMutableDictionary *statusInfoMap;
@property (retain, nonatomic) NSMutableDictionary *statusStateMap;

- (void)encodeWithCoder:(id)a0;
- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;
- (id)getIdentifier;
- (id)initWithCoder:(id)a0;

@end
