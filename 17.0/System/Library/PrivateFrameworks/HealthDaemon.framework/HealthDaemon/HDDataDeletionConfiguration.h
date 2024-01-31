@class NSString;

@interface HDDataDeletionConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL generateDeletedObjects;
@property (nonatomic) BOOL failIfNotFound;
@property (nonatomic) BOOL notifyObservers;
@property (nonatomic) BOOL secureDelete;
@property (nonatomic) BOOL preserveExactStartAndEndDates;
@property (nonatomic) BOOL userRequested;
@property (copy, nonatomic) id /* block */ recursiveDeleteAuthorizationBlock;
@property (copy, nonatomic) NSString *restrictedSourceBundleIdentifier;
@property (copy, nonatomic) Class entityClass;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
