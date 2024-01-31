@class NSSet, NSString;

@interface HULinkedApplicationItem : HFItem

@property (retain, nonatomic) NSSet *associatedAccessories;
@property (readonly, nonatomic) NSString *bundleIdentifier;

+ (id)na_identity;

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_failedUpdateOutcome;
- (int)_iconVariantForScale:(double)a0;
- (id)_subclass_updateWithOptions:(id)a0;

@end
