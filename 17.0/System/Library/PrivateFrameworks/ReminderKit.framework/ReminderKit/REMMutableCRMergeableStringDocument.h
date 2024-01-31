@class REMReplicaIDSource, NSString, TTMergeableAttributedString, TTMergeableStringVersionedDocument, REMReplicaIDHelper;
@protocol REMReplicaManagerProviding;

@interface REMMutableCRMergeableStringDocument : NSObject <REMTTHashtagHosting, REMReplicaIDHelperOwner>

@property (retain, nonatomic) REMReplicaIDSource *replicaIDSource;
@property (retain, nonatomic) TTMergeableStringVersionedDocument *document;
@property (retain, nonatomic) REMReplicaIDHelper *replicaIDHelper;
@property (retain, nonatomic) id<REMReplicaManagerProviding> replicaManagerProvider;
@property (readonly, nonatomic) TTMergeableAttributedString *mergeableString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)addHashtag:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)immutableDocument;
- (void)removeHashtagInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)_test_insertString:(id)a0 atIndex:(unsigned long long)a1;
- (void)enumerateHashtagInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 options:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (id)hashtagAtIndex:(unsigned long long)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (id)initWithReplicaIDSource:(id)a0;
- (id)initWithReplicaIDSource:(id)a0 immutableDocumentToEdit:(id)a1;
- (void)replicaIDHelperDidAcquireReplicaUUID:(id)a0;
- (id)wipeAndReplaceWithString:(id)a0;

@end
