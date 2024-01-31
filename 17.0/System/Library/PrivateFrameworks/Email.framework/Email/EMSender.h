@class NSString, NSArray, EFLocked;

@interface EMSender : NSObject <NSSecureCoding, NSCopying> {
    struct EFAtomicObject { _Atomic long long cfObject; } _displayName;
    EFLocked *_addresses;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property long long databaseID;
@property long long bucket;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSArray *addresses;
@property (readonly, copy, nonatomic) NSString *contactIdentifier;

- (unsigned long long)hash;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addAddress:(id)a0;
- (id)_bestDisplayNameFromDisplayNames:(id)a0;
- (id)initWithDatabaseID:(long long)a0 addresses:(id)a1 contactIdentifier:(id)a2 bucket:(long long)a3;
- (void)removeAddress:(id)a0;

@end
