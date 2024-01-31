@class NSSet;

@interface BRCProblem : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) NSSet *effectedRecordNames;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithProblem:(id)a0;
- (id)initWithType:(int)a0 recordName:(id)a1;
- (void)mergeWithProblem:(id)a0;

@end
