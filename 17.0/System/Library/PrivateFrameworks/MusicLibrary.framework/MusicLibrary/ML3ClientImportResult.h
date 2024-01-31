@class NSDictionary;

@interface ML3ClientImportResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL success;
@property (readonly, copy, nonatomic) NSDictionary *resultingDatabasePersistentIDs;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithSuccess:(BOOL)a0 resultingDatabasePersistentIDs:(id)a1;

@end
