@class NSData, NSString, NSDictionary;

@interface UMUserSwitchContext : NSObject {
    NSDictionary *_environmentsByServices;
}

@property (copy, nonatomic) NSData *setupData;
@property (copy, nonatomic) NSString *shortLivedToken;
@property (nonatomic) BOOL secondaryActionRequired;

+ (id)contextWithSetupData:(id)a0 shortLivedToken:(id)a1 secondaryActionRequired:(BOOL)a2;

- (id)description;
- (void).cxx_destruct;

@end
