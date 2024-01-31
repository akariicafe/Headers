@class NSString, NSDictionary, AKDevice;

@interface AKWalrusContext : NSObject <AKAuthenticationContext, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *altDSID;
@property (nonatomic) long long serviceType;
@property (nonatomic) unsigned long long authenticationType;
@property (nonatomic) unsigned long long authenticationMode;
@property (nonatomic) BOOL isMDMInformationRequired;
@property (copy, nonatomic, setter=_setProxiedAppName:) NSString *_proxiedAppName;
@property (copy, nonatomic) NSDictionary *appProvidedData;
@property (copy, nonatomic) NSString *appProvidedContext;
@property (copy, nonatomic) AKDevice *proxiedDevice;
@property (copy, nonatomic) AKDevice *companionDevice;
@property (nonatomic) BOOL cliMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
