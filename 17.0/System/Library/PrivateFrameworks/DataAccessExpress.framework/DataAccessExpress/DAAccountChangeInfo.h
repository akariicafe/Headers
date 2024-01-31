@class NSString, NSDictionary, NSSet;

@interface DAAccountChangeInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long changeType;
@property (readonly, copy, nonatomic) NSString *accountIdentifier;
@property (readonly, copy, nonatomic) NSString *accountTypeIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *oldAccountProperties;
@property (readonly, copy, nonatomic) NSString *username;
@property (readonly, copy, nonatomic) NSString *password;
@property (readonly, copy, nonatomic) NSString *oldUsername;
@property (readonly, copy, nonatomic) NSString *oldPassword;
@property (readonly, copy, nonatomic) NSSet *modifiedDataClasses;
@property (readonly, copy, nonatomic) NSString *clientName;

+ (id)_stringForChangeType:(unsigned long long)a0;

- (id)redactedDescription;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithChangeType:(unsigned long long)a0 accountIdentifier:(id)a1 accountTypeIdentifier:(id)a2 oldAccountProperties:(id)a3 username:(id)a4 password:(id)a5 oldUsername:(id)a6 oldPassword:(id)a7 modifiedDataClasses:(id)a8 clientName:(id)a9;
- (id)initWithCoder:(id)a0;

@end
