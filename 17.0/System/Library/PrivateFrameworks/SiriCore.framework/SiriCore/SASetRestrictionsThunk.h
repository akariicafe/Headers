@interface SASetRestrictionsThunk : SASetRestrictions {
    id /* block */ _thunk;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithThunk:(id /* block */)a0;
- (void)siriCore_invokeThunk;

@end
