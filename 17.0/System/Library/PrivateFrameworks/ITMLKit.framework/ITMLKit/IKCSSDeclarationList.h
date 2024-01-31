@class IKMutableArray;

@interface IKCSSDeclarationList : NSObject <NSCopying>

@property (readonly, nonatomic) IKMutableArray *declarations;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;

- (id)init;
- (unsigned long long)count;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)lastDeclaration;
- (void)addDeclaration:(id)a0;
- (id)declarationAtIndex:(unsigned long long)a0;
- (id)firstDeclaration;

@end
