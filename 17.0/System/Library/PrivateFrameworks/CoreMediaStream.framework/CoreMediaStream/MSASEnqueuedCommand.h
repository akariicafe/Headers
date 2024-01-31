@class NSString, NSDictionary;

@interface MSASEnqueuedCommand : NSObject <NSCoding>

@property (copy, nonatomic) NSString *command;
@property (retain, nonatomic) NSDictionary *variantParam;
@property (retain, nonatomic) NSDictionary *invariantParam;

+ (id)command;
+ (id)commandwithCommand:(id)a0 variantParam:(id)a1 invariantParam:(id)a2;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)canBeGroupedWithCommand:(id)a0;
- (id)initWithCommand:(id)a0 variantParam:(id)a1 invariantParam:(id)a2;

@end
