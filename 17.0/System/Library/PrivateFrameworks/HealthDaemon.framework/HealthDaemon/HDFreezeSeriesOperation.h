@class NSUUID, NSDictionary;

@interface HDFreezeSeriesOperation : HDJournalableOperation {
    NSUUID *_identifier;
    NSDictionary *_metadata;
    Class _entityClass;
    NSUUID *_frozenIdentifier;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)performWithProfile:(id)a0 transaction:(id)a1 error:(id *)a2;
- (id)initWithCoder:(id)a0;

@end
