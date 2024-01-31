@class NSString, NSArray;

@interface GDKnosisAnswer : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *answerId;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSArray *facts;
@property (readonly, copy, nonatomic) NSArray *parents;
@property (readonly, copy, nonatomic) NSArray *requestIds;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithAnswerId:(id)a0 name:(id)a1 facts:(id)a2 parents:(id)a3 requestIds:(id)a4;

@end
