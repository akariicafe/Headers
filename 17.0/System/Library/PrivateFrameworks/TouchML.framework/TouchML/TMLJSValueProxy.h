@class NSString;

@interface TMLJSValueProxy : NSObject <TMLJSValueProxy> {
    id _target;
    NSString *_keyPath;
}

@property (retain, nonatomic) id _;

- (void).cxx_destruct;
- (id)initWithTarget:(id)a0 keyPath:(id)a1;

@end
