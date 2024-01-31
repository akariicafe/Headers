@class NSString, NSNumber, NSTimeZone;

@interface ICPlayActivityEnqueuerProperties : NSObject <NSSecureCoding, NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *buildVersion;
@property (readonly, copy, nonatomic, getter=isPrivateListeningEnabled) NSNumber *privateListeningEnabled;
@property (readonly, copy, nonatomic) NSString *deviceGUID;
@property (readonly, copy, nonatomic) NSString *deviceName;
@property (readonly, copy, nonatomic) NSTimeZone *timeZone;
@property (readonly, nonatomic) long long systemReleaseType;
@property (readonly, nonatomic, getter=isSBEnabled) BOOL SBEnabled;
@property (readonly, nonatomic) unsigned long long storeAccountID;
@property (readonly, copy, nonatomic) NSString *storeFrontID;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)_copyWithClass:(Class)a0 zone:(struct _NSZone { } *)a1;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
