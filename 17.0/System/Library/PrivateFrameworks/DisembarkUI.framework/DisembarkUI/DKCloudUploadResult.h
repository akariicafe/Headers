@class NSString, NSNumber, NSError;

@interface DKCloudUploadResult : NSObject

@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic, getter=isPrimaryAccount) NSNumber *primaryAccount;
@property (nonatomic) BOOL success;
@property (retain, nonatomic) NSError *error;

+ (id)resultWithAccount:(id)a0 success:(BOOL)a1 error:(id)a2;
+ (id)resultWithSuccess:(BOOL)a0 error:(id)a1;

- (id)description;
- (void).cxx_destruct;

@end
