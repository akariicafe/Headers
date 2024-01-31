@class NSString, CWFChannel;

@interface CWFRNRBSS : NSObject <CWFJSONEncodable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long shortSSID;
@property (copy, nonatomic) NSString *BSSID;
@property (copy, nonatomic) CWFChannel *channel;
@property (nonatomic, getter=isUPRActive) BOOL UPRActive;
@property (nonatomic, getter=isSameSSID) BOOL sameSSID;
@property (nonatomic, getter=isMultipleBSSID) BOOL multipleBSSID;
@property (nonatomic, getter=isTransmittedBSSID) BOOL transmittedBSSID;
@property (nonatomic, getter=isMultiband6GHz) BOOL multiband6GHz;
@property (nonatomic, getter=isColocatedAP) BOOL colocatedAP;
@property (nonatomic) unsigned long long TBTTOffset;
@property (nonatomic) unsigned long long primary20MHzPSD;

- (id)JSONCompatibleKeyValueMap;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToRNRBSS:(id)a0;

@end
