@class NSString, HDAssertion;

@interface HDIngestDeviceContextsOperation : HDJournalableOperation {
    HDAssertion *_assertion;
    NSString *_containerIdentifier;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)transactionContext;
- (BOOL)performWithProfile:(id)a0 transaction:(id)a1 error:(id *)a2;
- (id)initWithCoder:(id)a0;
- (id)initWithAccessibilityAssertion:(id)a0 containerIdentifier:(id)a1;

@end
