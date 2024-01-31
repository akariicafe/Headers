@interface RSStateInfo : NSObject

@property (nonatomic) unsigned long long stateType;
@property (nonatomic) long long actionRevision;

- (id)initWithType:(unsigned long long)a0 revision:(long long)a1;

@end
