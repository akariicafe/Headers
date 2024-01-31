@class NSUUID, NSString, CSCoreSpeechServicesAccessoryInfo, NSNumber;

@interface CSVoiceTriggerRTModelRequestOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL allowMph;
@property (readonly, nonatomic) NSNumber *userSelectedPhraseType;
@property (readonly, nonatomic) NSUUID *endpointId;
@property (readonly, nonatomic) NSNumber *engineMajorVersion;
@property (readonly, nonatomic) NSNumber *engineMinorVersion;
@property (readonly, nonatomic) NSNumber *accessoryModelType;
@property (readonly, nonatomic) NSString *siriLocale;
@property (readonly, copy, nonatomic) CSCoreSpeechServicesAccessoryInfo *accessoryInfo;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMutableBuilder:(id /* block */)a0;
- (id)initWithCSRTModelRequestOptions:(id)a0 builder:(id /* block */)a1;

@end
