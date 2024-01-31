@class ASDMigrationRequestOptions;

@interface ASDMigrationRequest : ASDEphemeralRequest

@property (readonly, copy, nonatomic) ASDMigrationRequestOptions *options;

+ (long long)requestType;

- (id)initWithOptions:(id)a0;
- (void)startWithCompletionBlock:(id /* block */)a0;

@end
