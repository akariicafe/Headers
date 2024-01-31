@class NSArray, HKLinkSetWrapper;

@interface HKUserDomainConceptLinkCollection : NSObject <NSCopying, NSSecureCoding, NSFastEnumeration> {
    HKLinkSetWrapper *_orderedSet;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSArray *_lock_arrayRepresentation;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long epoch;
@property (readonly, copy, nonatomic) NSArray *links;
@property (readonly, nonatomic) long long count;

+ (id)_wrappedUDCLinks:(id)a0;
+ (id)collectionByMergingCollection:(id)a0 otherCollection:(id)a1;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithLinks:(id)a0;
- (id)_copyWithLinkSetWrapper:(id)a0;
- (id)_orderedSetWithDecoder:(id)a0 error:(id *)a1;
- (id)collectionByAppendingLink:(id)a0;
- (id)collectionByAppendingLinks:(id)a0;
- (id)collectionByInsertingLink:(id)a0 atIndex:(unsigned long long)a1;
- (id)collectionByMergingCollection:(id)a0;
- (id)collectionByMergingInLegacyArrayOfLinks:(id)a0;
- (id)collectionByMovingLinkFromIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1;
- (id)collectionByRemovingAllLinks;
- (id)collectionByRemovingLinkAtIndex:(unsigned long long)a0;
- (id)collectionByRemovingLinksWithTargetUUID:(id)a0;
- (id)collectionByReplacingLinkAtIndex:(unsigned long long)a0 withLink:(id)a1;
- (id)collectionByRetargetingLinksWithUUID:(id)a0 withNewUUID:(id)a1;
- (id)collectionBySwappingLinksAtIndex:(unsigned long long)a0 otherIndex:(unsigned long long)a1;
- (id)initWithLinkSetWrapper:(id)a0 epoch:(long long)a1;
- (void)unitTesting_setEpoch:(long long)a0;

@end
