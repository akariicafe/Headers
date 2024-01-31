@class NSString;

@interface HMSymptom : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) long long type;
@property (readonly, copy) NSString *localizedTitle;

+ (id)archive:(id)a0;
+ (id)archiveSymptomDict:(id)a0;
+ (id)symptomWithType:(long long)a0;
+ (id)unarchive:(id)a0;
+ (id)unarchiveSymptomDict:(id)a0;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
