@class NSString, NSArray, CEIcon, NSNumber;

@interface CERecommendation : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSNumber *storageRecoverable;
@property (copy, nonatomic) NSString *category;
@property (copy, nonatomic) NSString *status;
@property (retain, nonatomic) NSArray *actions;
@property (retain, nonatomic) CEIcon *icon;
@property (nonatomic) BOOL completed;

- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0 title:(id)a1 message:(id)a2 bundleID:(id)a3 storageRecoverable:(id)a4 category:(id)a5 actions:(id)a6;
- (id)initWithIdentifier:(id)a0 title:(id)a1 subtitle:(id)a2 message:(id)a3 bundleID:(id)a4 storageRecoverable:(id)a5 category:(id)a6 actions:(id)a7;
- (void)parseActions:(id)a0;

@end
