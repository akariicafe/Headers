@class CPLChangeBatch;

@interface CPLPullSessionRevertRecords : CPLChangeSessionUpdate

@property (readonly, nonatomic) CPLChangeBatch *revertedChangesBatch;

+ (BOOL)supportsSecureCoding;

- (id)statusDescription;
- (BOOL)discardFromStore:(id)a0 error:(id *)a1;
- (void)encodeWithCoder:(id)a0;
- (id)storageForStatusInStore:(id)a0;
- (void).cxx_destruct;
- (BOOL)applyToStore:(id)a0 error:(id *)a1;
- (id)initWithCoder:(id)a0;
- (id)initWithStore:(id)a0 revertedChangesBatch:(id)a1;

@end
