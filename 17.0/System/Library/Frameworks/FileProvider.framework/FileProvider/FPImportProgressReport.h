@class NSArray, NSDictionary;

@interface FPImportProgressReport : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) long long numberOfItemsReconciled;
@property (readonly, nonatomic) long long numberOfItemsInError;
@property (readonly, copy, nonatomic) NSArray *errorDetails;
@property (readonly, copy, nonatomic) NSDictionary *json;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithStatus:(long long)a0 numberOfItemsReconciled:(long long)a1 numberOfItemsInError:(long long)a2 errorDetails:(id)a3;

@end
