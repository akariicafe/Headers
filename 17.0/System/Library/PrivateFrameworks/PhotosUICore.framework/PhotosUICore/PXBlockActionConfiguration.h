@class NSString, UIImage;

@interface PXBlockActionConfiguration : NSObject <NSCopying>

@property (copy, nonatomic) NSString *actionName;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (copy, nonatomic) id /* block */ canPerformBlock;
@property (nonatomic, getter=isDestructive) BOOL destructive;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (copy, nonatomic) id /* block */ menuElementConstructor;

- (id)initWithBlock:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
