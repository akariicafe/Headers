@class NSArray;

@interface ASDRestoreApplicationsRequestOptions : ASDRequestOptions

@property (nonatomic) BOOL completeDataPromise;
@property (nonatomic) BOOL createsPlaceholders;
@property (nonatomic) BOOL createAsMobileBackup;
@property (nonatomic) BOOL skipCoordinatorCompletion;
@property (nonatomic) BOOL restoreApplicationData;
@property (readonly, nonatomic) NSArray *items;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithApplicationMetadata:(id)a0;

@end
