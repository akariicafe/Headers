@class NSUUID, NSString, NSData, HMDSiriEndpointSessionStateTypeWrapper;

@interface HMDSiriEndpointSessionStateTLV : NSObject <NSCopying, HAPTLVProtocol>

@property (readonly) NSUUID *hubUUID;
@property (retain, nonatomic) HMDSiriEndpointSessionStateTypeWrapper *sessionState;
@property (retain, nonatomic) NSData *hubIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)parsedFromData:(id)a0 error:(id *)a1;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)parseFromData:(id)a0 error:(id *)a1;
- (id)serializeWithError:(id *)a0;
- (id)initWithSessionState:(id)a0 hubIdentifier:(id)a1;

@end
