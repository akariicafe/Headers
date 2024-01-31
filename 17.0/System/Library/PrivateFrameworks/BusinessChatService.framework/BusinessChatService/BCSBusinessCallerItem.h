@class NSString, NSURL, BCSBusinessCallerItemIdentifier;

@interface BCSBusinessCallerItem : BCSItem <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BCSBusinessCallerItemIdentifier *identifier;
@property (readonly, copy, nonatomic) NSString *phoneNumber;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *department;
@property (readonly, copy, nonatomic) NSURL *logoURL;

+ (id)itemsFromRecords:(id)a0;
+ (id)itemFromStatement:(struct sqlite3_stmt { } *)a0;

- (id)itemIdentifier;
- (void)setPhoneNumber:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (long long)type;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCallerIdMessage:(id)a0 bucketID:(id)a1;
- (id)initWithPhoneNumber:(id)a0 name:(id)a1 department:(id)a2 logoURL:(id)a3;
- (id)initWithPhoneNumber:(id)a0 phoneHash:(long long)a1 name:(id)a2 department:(id)a3 logoURL:(id)a4;
- (BOOL)matchesItemIdentifying:(id)a0;
- (long long)truncatedHash;
- (void)updateStatementValues:(struct sqlite3_stmt { } *)a0 withItemIdentifier:(id)a1;

@end
