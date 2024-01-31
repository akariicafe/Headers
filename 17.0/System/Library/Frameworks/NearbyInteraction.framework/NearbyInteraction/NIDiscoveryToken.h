@class NSData, NSString, NSNumber;
@protocol NIDeviceCapability;

@interface NIDiscoveryToken : NSObject <NSCopying, NSSecureCoding> {
    NSNumber *_shortDeviceAddress;
    NSData *_identifyingSequence;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSData *rawToken;
@property (readonly) NSString *rawTokenAsString;
@property (readonly) long long tokenVariant;
@property (readonly, copy, nonatomic) id<NIDeviceCapability> deviceCapabilities;

+ (id)_identifyingSequenceFromBytes:(id)a0;
+ (id)generateFindingTokenWithIRK:(id)a0 forExternalUse:(BOOL)a1;
+ (id)serialize:(id)a0;
+ (id)deserialize:(id)a0;
+ (id)generateFindingTokenWithIRK:(id)a0;

- (unsigned long long)hash;
- (id)initWithBytes:(id)a0;
- (id)initWithDeviceAddress:(unsigned short)a0;
- (void)encodeWithCoder:(id)a0;
- (id)descriptionInternal;
- (id)objectInRawTokenOPACKDictForKey:(id)a0;
- (id)shortDeviceAddress;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)getSessionIdentifier;
- (id)getIRK;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
