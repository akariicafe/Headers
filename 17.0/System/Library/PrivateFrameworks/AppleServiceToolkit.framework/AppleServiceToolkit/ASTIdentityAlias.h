@class NSDictionary;

@interface ASTIdentityAlias : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDictionary *dictionary;
@property (nonatomic) BOOL diagnosticMode;

+ (id)identityAliasWithChipId:(id)a0 uniqueChipId:(id)a1;
+ (id)identityAliasWithMainLogicBoardSerialNumber:(id)a0;
+ (id)identityAliasWithSerialNumber:(id)a0;
+ (BOOL)isCoreRepairFrameworkAvailable;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSerialNumber:(id)a0;
- (id)initWithChipId:(id)a0 uniqueChipId:(id)a1;
- (id)initWithMainLogicBoardSerialNumber:(id)a0;

@end
