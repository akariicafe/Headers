@class NSString;

@interface SGIdentityName : NSObject {
    NSString *_privFullName;
}

@property (readonly, nonatomic) NSString *firstname;
@property (readonly, nonatomic) NSString *surname;
@property (readonly, nonatomic) NSString *middlename;
@property (readonly, nonatomic) NSString *prefix;
@property (readonly, nonatomic) NSString *suffix;
@property (readonly, nonatomic) NSString *fullName;

+ (id)patterns;
+ (id)nameWithString:(id)a0;

- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (id)initWithChineseName:(id)a0;
- (id)initWithJapaneseName:(id)a0;
- (id)initWithKoreanName:(id)a0;
- (id)initWithSpanishName:(id)a0;
- (id)initWithVietnameseName:(id)a0;
- (id)initWithWesternName:(id)a0;
- (id)segmentWesternNameWithNameParts:(id)a0 andPrefix:(id)a1;
- (id)toSGNameWithOrigin:(id)a0 recordId:(id)a1 extractionInfo:(id)a2;

@end
