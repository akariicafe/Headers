@class NSString;

@interface BSBlockTransaction : BSTransaction {
    id /* block */ _block;
}

@property (copy, nonatomic) NSString *debugName;

- (BOOL)_canBeInterrupted;
- (id)initWithBlock:(id /* block */)a0;
- (void)_begin;
- (id)_descriptionProem;
- (id)_graphNodeDebugName;
- (void).cxx_destruct;

@end
