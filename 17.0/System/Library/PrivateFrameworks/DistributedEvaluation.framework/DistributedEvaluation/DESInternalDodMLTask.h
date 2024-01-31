@class DESRecipe, NSString, NSURL, DESRecordSet, DESUploadTransport;

@interface DESInternalDodMLTask : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) DESRecipe *recipe;
@property (readonly, nonatomic) DESRecordSet *matchingRecordSet;
@property (readonly, nonatomic) NSURL *baseURL;
@property (readonly, nonatomic) NSString *localeIdentifier;
@property (readonly, nonatomic) NSString *testingRecipePath;
@property (readonly, nonatomic) DESUploadTransport *uploadTransport;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRecipe:(id)a0 matchingRecordSet:(id)a1 baseURL:(id)a2 localIdentifier:(id)a3 recipePath:(id)a4 uploadTransport:(id)a5;

@end
