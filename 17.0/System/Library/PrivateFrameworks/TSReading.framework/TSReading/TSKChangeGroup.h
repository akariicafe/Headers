@class NSMutableArray;

@interface TSKChangeGroup : NSObject <NSCopying>

@property (readonly, nonatomic) NSMutableArray *changesArray;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)registerChange:(int)a0 details:(id)a1 forChangeSource:(id)a2;

@end
