@class NSString, NSPredicate;

@interface _EXValuesQuery : _EXQuery {
    unsigned int _platform;
    NSString *_extensionPointIdentifier;
    NSPredicate *_predicate;
    struct { unsigned int val[8]; } _hostAuditToken;
}

+ (BOOL)supportsSecureCoding;

- (struct { unsigned int x0[8]; })hostAuditToken;
- (id)initWithExtensionPointIdentifier:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (unsigned int)platform;
- (id)extensionPointIdentifier;
- (void)setHostAuditToken:(struct { unsigned int x0[8]; })a0;
- (void)encodeWithCoder:(id)a0;
- (void)setPredicate:(id)a0;
- (id)extensionPointRecords;
- (void)setExtensionPointIdentifier:(id)a0;
- (BOOL)isEqualToQuery:(id)a0;
- (id)description;
- (BOOL)matchesRecord:(id)a0;
- (void).cxx_destruct;
- (void)setPlatform:(unsigned int)a0;
- (id)initWithExtensionPointIdentifier:(id)a0 predicate:(id)a1;
- (BOOL)isEqual:(id)a0;
- (id)predicate;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
