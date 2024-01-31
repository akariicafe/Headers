@class NSNumber, NSUUID, NSArray;

@interface CLMiLoFingerprintMetaInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSNumber *numberOfWiFiAccessPoints;
@property (readonly, nonatomic) NSNumber *numberOfBLESources;
@property (readonly, nonatomic) NSNumber *numberOfUWBSources;
@property (readonly, nonatomic) NSUUID *requestIdentifier;
@property (readonly, nonatomic) NSArray *errors;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithNumWiFiAccessPoints:(id)a0 numBLESources:(id)a1 numUWBSources:(id)a2 requestIdentifier:(id)a3 errors:(id)a4;

@end
