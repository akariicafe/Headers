@class NSArray;

@interface WFSmartPromptDialogResponse : WFRequestAuthorizationDialogResponse <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *promptedStatesData;

+ (BOOL)supportsBSXPCSecureCoding;
+ (id)prepareDeletionAuthorizationDatabaseDataFromConfiguration:(id)a0 resultCode:(unsigned long long)a1 error:(id *)a2;
+ (id)prepareSmartPromptsDatabaseDataFromConfiguration:(id)a0 resultCode:(unsigned long long)a1 error:(id *)a2;
+ (id)updatedStatusFromResultCode:(unsigned long long)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithResult:(unsigned long long)a0 promptedStatesData:(id)a1;

@end
