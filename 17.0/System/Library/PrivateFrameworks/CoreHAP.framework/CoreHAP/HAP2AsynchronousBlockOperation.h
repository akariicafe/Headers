@interface HAP2AsynchronousBlockOperation : HAP2AsynchronousOperation {
    id /* block */ _block;
}

- (id)initWithBlock:(id /* block */)a0;
- (id)init;
- (void)main;
- (id)initWithName:(id)a0 block:(id /* block */)a1;
- (id)initWithName:(id)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 activity:(id)a1;
- (id)initWithName:(id)a0 activity:(id)a1 block:(id /* block */)a2;
- (id)initWithName:(id)a0 optionalActivity:(id)a1;

@end
