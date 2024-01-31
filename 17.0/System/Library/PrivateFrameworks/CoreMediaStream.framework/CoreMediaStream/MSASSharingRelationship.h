@class NSString, NSArray, NSDate;

@interface MSASSharingRelationship : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *GUID;
@property (retain, nonatomic) NSString *albumGUID;
@property (retain, nonatomic) NSString *email;
@property (retain, nonatomic) NSArray *emails;
@property (retain, nonatomic) NSArray *phones;
@property (retain, nonatomic) NSString *fullName;
@property (retain, nonatomic) NSString *firstName;
@property (retain, nonatomic) NSString *lastName;
@property (retain, nonatomic) NSString *personID;
@property (retain, nonatomic) NSDate *subscriptionDate;
@property (nonatomic) int state;
@property (nonatomic) BOOL isMine;

+ (id)MSASPSharingRelationshipFromProtocolDictionary:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_fullName;
- (BOOL)isEqualToSharingRelationship:(id)a0;

@end
