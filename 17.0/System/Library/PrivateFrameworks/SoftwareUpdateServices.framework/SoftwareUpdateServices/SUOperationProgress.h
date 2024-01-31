@class NSString;

@interface SUOperationProgress : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *phase;
@property (nonatomic) float percentComplete;
@property (nonatomic) float normalizedPercentComplete;
@property (nonatomic) double timeRemaining;
@property (nonatomic) BOOL isDone;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
