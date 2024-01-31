@class MLMultiArray;

@interface CSEnhancedEndpointerInputVector : NSObject

@property (retain, nonatomic) MLMultiArray *mlInputVector;

- (id)initWithShape:(id)a0;
- (void).cxx_destruct;
- (void)populateVector:(id)a0;

@end
