@protocol LAPasscodeChangeEnvironment;

@interface LAPasscodeChangeService : NSObject {
    id<LAPasscodeChangeEnvironment> _env;
}

- (id)init;
- (id)initWithEnvironment:(id)a0;
- (void).cxx_destruct;
- (void)startInParentVC:(id)a0 completion:(id /* block */)a1;
- (void)startInParentVC:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)_startOperation:(id)a0 completion:(id /* block */)a1;

@end
