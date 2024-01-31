@class NSString, NSUUID, NSArray, NSDate;

@interface CWFAutoJoinStatus : NSObject <CWFJSONEncodable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSUUID *UUID;
@property (copy, nonatomic) NSString *interfaceName;
@property (copy, nonatomic) NSDate *startedAt;
@property (copy, nonatomic) NSDate *endedAt;
@property (readonly) double duration;
@property (copy, nonatomic) NSArray *joinAttempts;
@property (nonatomic) long long trigger;
@property (nonatomic) long long state;
@property (nonatomic) BOOL result;

- (id)JSONCompatibleKeyValueMap;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)deepCopy;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToAutoJoinStatus:(id)a0;

@end
