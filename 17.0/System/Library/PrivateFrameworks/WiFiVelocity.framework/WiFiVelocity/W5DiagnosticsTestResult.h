@class NSUUID, NSDictionary, NSError;

@interface W5DiagnosticsTestResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSUUID *uuid;
@property (nonatomic) long long testID;
@property (nonatomic) BOOL result;
@property (nonatomic) BOOL didPass;
@property (copy, nonatomic) NSDictionary *configuration;
@property (copy, nonatomic) NSDictionary *info;
@property (copy, nonatomic) NSError *error;
@property (nonatomic) double testStarted;
@property (nonatomic) double testCompleted;

- (unsigned long long)hash;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToDiagnosticsTestResult:(id)a0;

@end
