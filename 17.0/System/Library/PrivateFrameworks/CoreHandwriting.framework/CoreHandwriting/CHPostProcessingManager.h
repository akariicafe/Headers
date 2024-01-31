@class NSArray;

@interface CHPostProcessingManager : NSObject

@property (retain, nonatomic) NSArray *sequence;

- (id)init;
- (id)initWithSequence:(id)a0;
- (void).cxx_destruct;
- (id)initWithStep:(id)a0;
- (id)process:(id)a0 options:(id)a1;

@end
