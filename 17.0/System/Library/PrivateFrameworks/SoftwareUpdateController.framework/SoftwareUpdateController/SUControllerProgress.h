@class NSString;

@interface SUControllerProgress : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *phase;
@property (nonatomic) float portionComplete;
@property (nonatomic) double estimatedTimeRemaining;
@property (nonatomic) BOOL isDone;
@property (retain, nonatomic) NSString *actionText;
@property (nonatomic) BOOL isStalled;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)copy;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPhase:(id)a0 portion:(float)a1 remaining:(double)a2 isDone:(BOOL)a3;
- (BOOL)sameProgress:(id)a0 portion:(float)a1 remaining:(double)a2 isDone:(BOOL)a3;
- (BOOL)sameProgress:(id)a0 portion:(float)a1 remaining:(double)a2 isDone:(BOOL)a3 actionText:(id)a4;
- (BOOL)sameProgress:(id)a0 portion:(float)a1 remaining:(double)a2 isDone:(BOOL)a3 actionText:(id)a4 isStalled:(BOOL)a5;

@end
