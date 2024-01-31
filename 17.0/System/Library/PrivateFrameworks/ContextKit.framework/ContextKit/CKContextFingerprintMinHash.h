@interface CKContextFingerprintMinHash : CKContextFingerprint

@property (readonly, nonatomic) unsigned int numHashes;
@property (readonly, nonatomic) int *hashes;

+ (BOOL)supportsSecureCoding;
+ (id)parse:(id)a0;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)data;
- (id)debugDescription;
- (id)initWithCoder:(id)a0;
- (float)compareFingerprintWith:(id)a0;
- (id)initWithHashes:(int *)a0 count:(unsigned int)a1;

@end
