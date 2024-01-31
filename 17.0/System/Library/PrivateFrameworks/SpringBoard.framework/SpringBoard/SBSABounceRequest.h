@class NSString;

@interface SBSABounceRequest : NSObject <SBSARequestRepresenting>

@property (readonly, nonatomic) long long style;
@property (readonly, copy, nonatomic) id /* block */ triggeredBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithStyle:(long long)a0 triggeredBlock:(id /* block */)a1;

@end
