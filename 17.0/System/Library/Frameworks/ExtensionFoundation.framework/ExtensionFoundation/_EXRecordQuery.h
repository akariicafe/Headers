@class NSPredicate, LSExtensionPointRecord;

@interface _EXRecordQuery : _EXQuery {
    NSPredicate *_predicate;
    struct { unsigned int val[8]; } _hostAuditToken;
}

@property (retain) LSExtensionPointRecord *record;

+ (BOOL)supportsSecureCoding;

- (struct { unsigned int x0[8]; })hostAuditToken;
- (unsigned int)platform;
- (id)extensionPointIdentifier;
- (void)setHostAuditToken:(struct { unsigned int x0[8]; })a0;
- (void)encodeWithCoder:(id)a0;
- (void)setPredicate:(id)a0;
- (id)extensionPointRecords;
- (BOOL)matchesRecord:(id)a0;
- (id)initWithExtensionPoint:(id)a0;
- (void).cxx_destruct;
- (id)predicate;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
