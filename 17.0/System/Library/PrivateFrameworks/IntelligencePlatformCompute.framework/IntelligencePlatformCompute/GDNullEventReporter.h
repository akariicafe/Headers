@interface GDNullEventReporter : NSObject <BMViewEventReporter>

- (id)init;
- (BOOL)streamDeletionWithStreamIdentifier:(id)a0 error:(id *)a1;
- (BOOL)streamPrunedWithStreamIdentifier:(id)a0 error:(id *)a1;
- (BOOL)streamUpdatedWithStreamIdentifier:(id)a0 error:(id *)a1;

@end
