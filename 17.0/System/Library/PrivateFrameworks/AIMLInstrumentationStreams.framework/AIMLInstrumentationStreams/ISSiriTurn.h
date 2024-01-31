@class NSUUID;

@interface ISSiriTurn : ISEventGraph

@property (nonatomic, readonly) NSUUID *turnId;
@property (nonatomic, readonly) double timeIntervalSince1970Nonnull;
@property (nonatomic, readonly) NSUUID *previousTurnId;

+ (id)constructWithEventGraph:(id)a0;

@end
