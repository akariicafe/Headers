@class NSArray;

@interface LPAppearanceDependentValue : NSObject {
    id /* block */ _provider;
}

@property (retain, nonatomic) NSArray *dependentTraits;

- (void).cxx_destruct;
- (id)initWithProvider:(id /* block */)a0;
- (id)valueForAppearance:(id)a0;

@end
