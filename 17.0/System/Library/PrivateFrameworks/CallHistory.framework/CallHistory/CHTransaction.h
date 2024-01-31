@class NSData;

@interface CHTransaction : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long transactionType;
@property (readonly, nonatomic) NSData *record;

+ (id)unarchivedObjectFromData:(id)a0 error:(id *)a1;
+ (id)unarchivedObjectClasses;
+ (id)toString:(unsigned long long)a0;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)archivedDataWithError:(id *)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithString:(id)a0 andRecord:(id)a1;
- (id)initWithType:(unsigned long long)a0 andRecord:(id)a1;
- (BOOL)isEqualToTransaction:(id)a0;

@end
