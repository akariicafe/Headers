@class NSString;

@interface HDReplaceObjectIdentifierOperation : HDJournalableOperation {
    NSString *_objectIdentifier;
    NSString *_replacementIdentifier;
    NSString *_schemaIdentifier;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)performWithProfile:(id)a0 transaction:(id)a1 error:(id *)a2;
- (id)initWithCoder:(id)a0;
- (id)initWithWithObjectIdentifier:(id)a0 replacementIdentifier:(id)a1 schemaIdentifier:(id)a2;

@end
