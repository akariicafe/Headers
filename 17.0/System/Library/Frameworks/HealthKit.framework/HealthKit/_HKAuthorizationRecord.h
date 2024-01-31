@class NSDate;

@interface _HKAuthorizationRecord : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long status;
@property (readonly, nonatomic) long long request;
@property (readonly, nonatomic) long long mode;
@property (readonly, copy, nonatomic) NSDate *anchorLimitModifiedDate;

+ (id)recordWithStatus:(long long)a0 request:(long long)a1 mode:(long long)a2 anchorLimitModifiedDate:(id)a3;

- (BOOL)readingEnabled;
- (unsigned long long)hash;
- (BOOL)isCompatibleStatus:(long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_deepCopy;
- (id)recordWithReadingDisabled;
- (id)description;
- (id)recordWithSharingDisabled;
- (void).cxx_destruct;
- (BOOL)requestedReading;
- (BOOL)deniedSharing;
- (BOOL)sharingEnabled;
- (BOOL)isEqual:(id)a0;
- (id)initWithAuthorizationStatus:(long long)a0 authorizationRequest:(long long)a1 authorizationMode:(long long)a2 anchorLimitModifiedDate:(id)a3;
- (BOOL)requestedSharing;
- (BOOL)deniedReading;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
