@interface UpdatingRectValue : NSValue {
    id /* block */ _updateBlock;
}

- (void).cxx_destruct;
- (id)initWithUpdateBlock:(id /* block */)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })CGRectValue;

@end
