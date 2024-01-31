@interface UITextDropProposal : UIDropProposal <NSCopying>

@property (nonatomic) unsigned long long dropAction;
@property (nonatomic) unsigned long long dropProgressMode;
@property (nonatomic) BOOL useFastSameViewOperations;
@property (nonatomic) unsigned long long dropPerformer;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDropOperation:(unsigned long long)a0;

@end
