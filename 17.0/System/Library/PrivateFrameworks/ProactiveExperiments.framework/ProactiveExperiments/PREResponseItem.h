@class NSNumber, NSString;

@interface PREResponseItem : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSNumber *categoryId;
@property (readonly, nonatomic) NSNumber *modelId;
@property (readonly, nonatomic) NSNumber *responseClassId;
@property (readonly, nonatomic) NSNumber *replySubgroupId;
@property (readonly, nonatomic) NSNumber *replyTextId;
@property (readonly, nonatomic) NSString *replyText;
@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) NSNumber *isCustomResponse;
@property (readonly, nonatomic) NSNumber *isRobotResponse;

+ (id)responseItemArrayFromResponseKitArray:(id)a0 forLocale:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCategoryId:(id)a0 modelId:(id)a1 responseClassId:(id)a2 replySubgroupId:(id)a3 replyTextId:(id)a4 replyText:(id)a5 language:(id)a6 isCustomResponse:(id)a7 isRobotResponse:(id)a8;
- (BOOL)isEqualToResponseItem:(id)a0;

@end
