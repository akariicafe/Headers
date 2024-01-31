@class NSIndexSet;

@interface _SFCommandRecognizerArgument : NSObject

@property (readonly, nonatomic) char presence;
@property (readonly, copy, nonatomic) NSIndexSet *indexes;
@property (readonly, copy, nonatomic) NSIndexSet *adpositionIndexes;

- (void).cxx_destruct;
- (id)initWithPresence:(char)a0 indexes:(id)a1 adpositionIndexes:(id)a2;

@end
