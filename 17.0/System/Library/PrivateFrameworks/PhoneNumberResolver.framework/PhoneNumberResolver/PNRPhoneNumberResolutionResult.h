@class NSString;

@interface PNRPhoneNumberResolutionResult : NSObject

@property (readonly, nonatomic) NSString *locationName;
@property (readonly, nonatomic) long long dataSource;

- (void).cxx_destruct;
- (id)initWithLocationName:(id)a0 locationDataSource:(long long)a1;

@end
