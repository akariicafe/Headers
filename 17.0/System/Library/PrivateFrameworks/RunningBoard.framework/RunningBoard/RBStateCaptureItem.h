@class NSString;
@protocol RBSInvalidatable;

@interface RBStateCaptureItem : NSObject {
    id<RBSInvalidatable> _invalidatable;
}

@property (readonly, copy, nonatomic) id /* block */ block;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *identifier;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 identifier:(id)a1 block:(id /* block */)a2;

@end
