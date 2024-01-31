@class NSUUID, NSError, CLMiLoExportDatabaseTableResult;

@interface CLMiLoDebugResponse : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) CLMiLoExportDatabaseTableResult *exportDatabaseTablesResult;
@property (readonly, nonatomic) NSUUID *requestIdentifier;
@property (readonly, nonatomic) NSError *error;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithExportDatabaseTablesResult:(id)a0 requestIdentifier:(id)a1 error:(id)a2;

@end
