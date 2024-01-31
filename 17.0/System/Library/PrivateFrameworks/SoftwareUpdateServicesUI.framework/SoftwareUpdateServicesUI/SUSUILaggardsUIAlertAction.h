@class SUDescriptor;

@interface SUSUILaggardsUIAlertAction : BSAction {
    SUDescriptor *_descriptor;
    BOOL _loaded;
}

@property (readonly, retain, nonatomic) SUDescriptor *descriptor;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)loadIfNecessary;
- (void)decodeFromCoder:(id)a0;
- (id)initWithDescriptor:(id)a0 completionBlock:(id /* block */)a1;

@end
