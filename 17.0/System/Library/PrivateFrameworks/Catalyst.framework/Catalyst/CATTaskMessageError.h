@class NSError;

@interface CATTaskMessageError : CATTaskMessage

@property (retain, nonatomic) NSError *taskError;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithTaskUUID:(id)a0 taskError:(id)a1;
- (id)initWithCoder:(id)a0;

@end
