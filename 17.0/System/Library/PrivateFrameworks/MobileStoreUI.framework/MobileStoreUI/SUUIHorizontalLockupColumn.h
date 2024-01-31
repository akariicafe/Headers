@class NSMutableArray;

@interface SUUIHorizontalLockupColumn : NSObject

@property (nonatomic) long long identifier;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, copy, nonatomic) NSMutableArray *childViewElements;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)_addChildViewElement:(id)a0;

@end
