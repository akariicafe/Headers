@interface REElementBlockAction : REElementAction

@property (readonly, nonatomic) id /* block */ action;

- (id)initWithAction:(id /* block */)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_performWithContext:(id)a0;

@end
