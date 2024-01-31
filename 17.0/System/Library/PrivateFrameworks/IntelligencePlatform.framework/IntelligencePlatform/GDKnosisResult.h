@class NSString, NSArray, GDKnosisDebug, NSNumber;

@interface GDKnosisResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *query;
@property (readonly, copy, nonatomic) NSString *kgq;
@property (readonly, nonatomic) unsigned long long status;
@property (readonly, copy, nonatomic) NSArray *answers;
@property (readonly, copy, nonatomic) NSString *errorMessage;
@property (readonly, copy, nonatomic) NSNumber *limit;
@property (readonly, copy, nonatomic) NSNumber *offset;
@property (readonly, nonatomic) BOOL hasMoreAnswers;
@property (readonly, copy, nonatomic) GDKnosisDebug *debug;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithQuery:(id)a0 kgq:(id)a1 status:(unsigned long long)a2 answers:(id)a3 errorMessage:(id)a4 limit:(id)a5 offset:(id)a6 hasMoreAnswers:(BOOL)a7 debug:(id)a8;

@end
