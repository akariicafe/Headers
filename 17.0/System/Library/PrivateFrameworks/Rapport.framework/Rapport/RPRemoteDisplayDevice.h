@class NSString, NSDictionary, NSObject;
@protocol OS_dispatch_source;

@interface RPRemoteDisplayDevice : RPEndpoint <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *persistentIdentifier;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *cameraCapabilitiesRefetchTimer;
@property (copy) NSDictionary *cameraCapabilities;
@property (readonly, nonatomic) unsigned int flags;

- (BOOL)isEqualToDevice:(id)a0;
- (id)descriptionWithLevel:(int)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)clearCameraCapabilitiesRefetchTimer;
- (unsigned int)updateWithEndpoint:(id)a0;

@end
