@class NSString, NSDate;

@interface VSSetTopBoxProfile : NSObject <NSCopying>

@property (retain, nonatomic) NSString *providerID;
@property (retain, nonatomic) NSString *userToken;
@property (retain, nonatomic) NSDate *activationTime;
@property (nonatomic) BOOL isDeveloper;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithProviderID:(id)a0 userToken:(id)a1 activationTime:(id)a2 isDeveloper:(BOOL)a3;

@end
