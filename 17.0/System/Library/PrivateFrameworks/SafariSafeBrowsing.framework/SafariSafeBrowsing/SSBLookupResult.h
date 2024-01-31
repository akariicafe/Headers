@class NSArray;

@interface SSBLookupResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *serviceLookupResults;
@property (readonly, nonatomic) BOOL URLContainsUserInfo;
@property (readonly, nonatomic, getter=isPhishing) BOOL phishing;
@property (readonly, nonatomic, getter=isMalware) BOOL malware;
@property (readonly, nonatomic, getter=isUnwantedSoftware) BOOL unwantedSoftware;
@property (readonly, nonatomic, getter=isKnownToBeUnsafe) BOOL knownToBeUnsafe;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithServiceLookUpResults:(id)a0;
- (id)_initWithServiceLookUpResults:(id)a0 URLContainsUserInfo:(BOOL)a1;

@end
