@class NSString;

@interface LCFFetureValueNameType : NSObject

@property (readonly, nonatomic) NSString *featureName;
@property (readonly, nonatomic) long long featureValueType;

- (void).cxx_destruct;
- (id)init:(id)a0 featureValueType:(long long)a1;

@end
