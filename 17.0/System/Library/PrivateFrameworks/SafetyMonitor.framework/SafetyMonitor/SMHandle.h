@class NSString, NSArray;

@interface SMHandle : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *primaryHandle;
@property (readonly, nonatomic) NSArray *secondaryHandles;

+ (long long)getSMHandleTypeWithHandle:(id)a0;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)descriptionDictionary;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPrimaryHandle:(id)a0 secondaryHandles:(id)a1;
- (id)outputToDictionary;
- (BOOL)hasEqualPrimaryHandle:(id)a0;

@end
