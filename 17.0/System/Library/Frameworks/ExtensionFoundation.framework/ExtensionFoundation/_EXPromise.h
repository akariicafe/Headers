@class NSUUID;

@interface _EXPromise : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSUUID *identifier;
@property (readonly, copy) id /* block */ promiseBlock;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithPromiseBlock:(id /* block */)a0;
- (void)resolveObjectOfClass:(Class)a0 completion:(id /* block */)a1;
- (id)resolveObjectOfClass:(Class)a0 error:(id *)a1;
- (void)resolveObjectOfClasses:(id)a0 completion:(id /* block */)a1;
- (id)resolveObjectOfClasses:(id)a0 error:(id *)a1;

@end
