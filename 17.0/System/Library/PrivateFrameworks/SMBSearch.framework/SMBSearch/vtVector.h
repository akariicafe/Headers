@class NSMutableArray;

@interface vtVector : NSObject

@property unsigned int vVectorElements;
@property (retain) NSMutableArray *vVectorData;

- (id)init;
- (int)addElement:(id)a0;
- (void).cxx_destruct;

@end
