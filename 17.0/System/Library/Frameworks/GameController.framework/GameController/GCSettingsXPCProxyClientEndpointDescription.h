@class NSString, GCSProfile, GCSettingsXPCProxyClientEndpoint;
@protocol NSObject, NSSecureCoding, NSCopying;

@interface GCSettingsXPCProxyClientEndpointDescription : NSObject <_GCControllerComponentDescription> {
    GCSProfile *_initialProfile;
    GCSettingsXPCProxyClientEndpoint *_materializedObject;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) id<NSObject, NSCopying, NSSecureCoding> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 initialValueForProfile:(id)a1;
- (id)materializeWithContext:(id)a0;

@end
