@class NSString, NSArray;

@interface CTCarrierSpacePlanGroupInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long planCategory;
@property (retain, nonatomic) NSString *groupId;
@property (retain, nonatomic) NSArray *groupOptionsList;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
